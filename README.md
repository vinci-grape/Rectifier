# Rectifier

### Dataset

The dataset is organized as follows:

1. [CodeNet](https://github.com/IBM/Project_CodeNet)
2. [AVATAR](https://github.com/wasiahmad/AVATAR)

After download and unzip data files, you should see the following directory structure:

```
Rectifier
├── dataset
    ├── codenet
    ├── avatar
├── ...
```

### Scripts

1. Translation with ChatGPT:
```
bash scripts/translate.sh ChatGPT codenet Python Java 50 0.95 0.7 0
```

2. For all other models (StarCoder, CodeGen, CodeLlama):
```
bash scripts/translate.sh CodeLlama codenet Python Java 50 0.95 0.2 0
```

3. For cleaning translations of open-source LLMs (i.e., CodeLlama) in codenet, you can run the following command:
```
bash scripts/clean_generations.sh CodeLlama codenet
```

4. For compile and testing of CodeNet and AVATAR (Python to Java) translations from CodeLlama, and generating fix reports, you can run the following commands:
```
bash scripts/test_avatar.sh Python Java CodeLlama fix_reports 1
bash scripts/test_codenet.sh Python Java CodeLlama fix_reports 1
```

5. For repairing unsuccessful translations of LLMs, you can run the following command:
```
bash scripts/run_codet5+.sh
```

After repairing unsuccessful translations of LLMs, your directory structure should be like the following:
```
Rectifier
├── CodeT5+
    ├── ...
├── output
    ├── CodeLlama
        ├── avatar
            ├── Java
                ├── C++_repair
                ├── C++
                ├── Python_repair
                ├── Python
            ├── ...
        ├── ...
    ├── ...
├── ...
```