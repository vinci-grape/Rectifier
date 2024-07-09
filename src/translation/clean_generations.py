import os
import re
import ast
import argparse

def list_files(startpath):
    files = []
    for root, dirs, walkfiles in os.walk(startpath):
        for name in walkfiles:
            files.append(os.path.join(root, name))

    return files


def clean_codegen(dataset):
    main_path = f'output/CodeGen/{dataset}'
    output_path = 'output/CodeGen/'

    files = list_files(main_path)

    for f in files:

        splitted = f.split('/')
        filename = splitted[-1].strip()
        target_lang = splitted[-2].strip()
        source_lang = splitted[-3].strip()

        with open(f, 'r') as file:
            data = file.read()

        data = data[data.find(f'{target_lang} Code:')+len(f'{target_lang} Code:'):].strip()        

        valid_lines = []
        for line in data.split('\n'):
            if line.strip() in ["*/", 'C Code:', 'C++ Code:', 'Java Code:', 'Python Code:', 'Go Code:']:
                continue
                break
            else:
                valid_lines.append(line)
        
        data = '\n'.join(valid_lines)
        data = data.replace('<|endoftext|>', '')

        if target_lang == 'Java':
            data = re.sub('public\s*class\s*.+', 'public class ' + filename.split('.')[0] + ' {', data)

        if target_lang == 'Java' and dataset == 'evalplus' and 'package com.example;' not in data:
            data = 'package com.example;\n' + data
        
        data = data.strip().strip().strip()

        os.makedirs(output_path + dataset + '/' + source_lang + '/' + target_lang, exist_ok=True)
        with open(output_path + dataset + '/' + source_lang + '/' + target_lang + '/' + filename, 'w') as file:
            file.write(data)


def clean_starcoder(dataset):
    main_path = f'output/StarCoder/{dataset}'
    output_path = 'output/StarCoder/'

    files = list_files(main_path)

    for f in files:
        splitted = f.split('/')
        filename = splitted[-1].strip()
        target_lang = splitted[-2].strip()
        source_lang = splitted[-3].strip()

        with open(f, 'r') as file:
            data = file.read()
        
        if '<fim_suffix><fim_middle>' in data:
            data = data[data.find('<fim_suffix><fim_middle>')+len('<fim_suffix><fim_middle>'):]

            valid_lines = []
            for line in data.split('\n'):
                if line.strip() in ["'''", 'C Code:', 'C++ Code:', 'Java Code:', 'Python Code:', 'Go Code:', '"""'] or line.strip().startswith("Input") or line.strip().startswith("Output"):
                    break
                else:
                    valid_lines.append(line)
            
            data = '\n'.join(valid_lines)
            data = data.replace('<|endoftext|>', '')



        if target_lang == 'Java' and 'static void main' in data:
            data = re.sub('(public\s+class|class) Main\s*.+', 'public class ' + filename.split('.')[0] + ' {', data)

        if target_lang == 'Java' and dataset == 'evalplus' and 'package com.example;' not in data:
            data = 'package com.example;\n' + data
        
        data = data.strip().strip().strip()
        
        os.makedirs(output_path + dataset + '/' + source_lang + '/' + target_lang, exist_ok=True)
        with open(output_path + dataset + '/' + source_lang + '/' + target_lang + '/' + filename, 'w') as file:
            file.write(data)


def clean_codellama(dataset):
    main_path = f'output/CodeLlama/{dataset}'
    output_path = 'output/CodeLlama/'

    files = list_files(main_path)

    for f in files:

        splitted = f.split('/')
        filename = splitted[-1].strip()
        target_lang = splitted[-2].strip()
        source_lang = splitted[-3].strip()

        with open(f, 'r') as file:
            data = file.read()

        data = data[data.find(f'{target_lang} Code:')+len(f'{target_lang} Code:'):].strip()

        valid_lines = []
        for line in data.split('\n'):
            if line.strip().startswith("Sure"):
                continue
            if line.strip().startswith("Please") or line.strip().startswith("Note") or line.strip().startswith("Here") or line.strip().startswith("In"):
                break
            else:
                valid_lines.append(line)
        
        data = '\n'.join(valid_lines)

        data = data.replace('</s>', '')
        data = data.replace(f'```{target_lang.lower()}', '')
        data = data.replace(f'```', '')

        if target_lang == 'Java':
            data = re.sub('public\s*class\s*.+', 'public class ' + filename.split('.')[0] + ' {', data)

        if target_lang == 'Java' and dataset == 'evalplus' and 'package com.example;' not in data:
            data = 'package com.example;\n' + data

        os.makedirs(output_path + dataset + '/' + source_lang + '/' + target_lang, exist_ok=True)
        with open(output_path + dataset + '/' + source_lang + '/' + target_lang + '/' + filename, 'w') as file:
            file.write(data)

  
def python_to_java_conditional(python_expr):
    parts = python_expr.split(' if ')
    condition = parts[1].split(' else ')[0]
    false_value = parts[1].split(' else ')[1]
    true_value = parts[0]

    java_expr = f"{condition} ? {true_value} : {false_value}"
    return java_expr


def operator_template(data):
    lines = data.split('\n')
    new_code = []
    for line in lines:
        if line.find('if') != -1 and line.find('else') != -1 and line.find('else') > line.find('if'):
            inner = line[line.find('(') + 1: line.rfind(')')]
            line = line[:line.find('(')+1] + python_to_java_conditional(inner) + line[line.rfind(')'):]
        new_code.append(line)
    return '\n'.join(new_code)


def clean_chatgpt(dataset):
    main_path = f'output/ChatGPT/{dataset}'
    output_path = 'output/ChatGPT/'

    files = list_files(main_path)

    for f in files:
        splitted = f.split('/')
        filename = splitted[-1].strip()
        target_lang = splitted[-2].strip()
        source_lang = splitted[-3].strip()
        
        with open(f, 'r') as file:
            data = file.read()

        pattern = re.compile(r"^.*End of Code.*\n?", re.MULTILINE)
        data = pattern.sub("", data)
    
        if target_lang == 'Java' and 'static void main' in data:
            data = re.sub('(public\s+class|class) Main\s*.+', 'public class ' + filename.split('.')[0] + ' {', data)
            
        data = data.strip().strip().strip()
        
        if target_lang == 'Java' and dataset == 'evalplus':
            data = 'package com.example;\n' + data
        
        data = data.strip().strip().strip()
        
        os.makedirs(output_path + dataset + '/' + source_lang + '/' + target_lang, exist_ok=True)
        with open(output_path + dataset + '/' + source_lang + '/' + target_lang + '/' + filename, 'w') as file:
            file.write(data)

def main(args):

    if args.model == 'StarCoder':
        clean_starcoder(args.dataset)
    elif args.model == 'CodeGen':
        clean_codegen(args.dataset)   
    elif args.model == 'ChatGPT':
        clean_chatgpt(args.dataset)
    elif args.model == 'CodeLlama':
        clean_codellama(args.dataset)


if __name__ == "__main__":

    parser = argparse.ArgumentParser(description='clean open-source model generations given a dataset and a model')
    parser.add_argument('--model', help='model to use for code translation. should be one of [ChatGPT,StarCoder,CodeGen,CodeLlama]', required=True, type=str)
    parser.add_argument('--dataset', help='dataset to use for code translation. should be one of [codenet,avatar]', required=True, type=str)
    args = parser.parse_args()
    main(args)
