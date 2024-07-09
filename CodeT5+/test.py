import argparse
from transformers import AutoModelForSeq2SeqLM, AutoTokenizer
import torch
import csv
import re

if __name__ == "__main__":

    parser = argparse.ArgumentParser()
    parser.add_argument("--model_checkpoint", default="saved_models/repair_java/final_checkpoint", type=str)
    args = parser.parse_args()

    tokenizer = AutoTokenizer.from_pretrained("Salesforce/codet5p-220m")
    model = AutoModelForSeq2SeqLM.from_pretrained(args.model_checkpoint).to("cuda")

    with open('cache_data/repair_test/test.csv', 'r') as csvfile:
        csvreader = csv.reader(csvfile)
        for idx, row in enumerate(csvreader):      
            if idx == 0:
                continue
            inputs = tokenizer([row[5]], return_tensors="pt").to("cuda")
            with torch.no_grad():
                outputs = model.generate(**inputs, max_length=512, temperature=0.8, top_p=0.95, do_sample=True)
            prediction = tokenizer.decode(outputs[0], skip_special_tokens=True)
            with open(f'../output/{row[0]}/{row[1]}/{row[2]}/{row[3]}_repair/{row[4]}', 'w') as outputfile:
                if row[3] == "Java":
                    prediction = re.sub('public\s*class\s*Main', 'public class ' + row[4].split('.')[0], prediction)
                outputfile.write(prediction)