WORKDIR=`pwd`
export PYTHONPATH=$WORKDIR;
export PYTHONIOENCODING=utf-8;

function prompt() {
    echo;
    echo "Syntax: bash scripts/test_codenet.sh SRC_LANG TRG_LANG MODEL OUTPUT_DIR ATTEMPT";
    echo "SRC_LANG: source language";
    echo "TRG_LANG: target language";
    echo "MODEL: name of the model to use";
    echo "OUTPUT_DIR: path to the output directory";
    echo "ATTEMPT: attempt number";
    exit;
}

while getopts ":h" option; do
    case $option in
        h) # display help
          prompt;
    esac
done

if [[ $# < 5 ]]; then
  prompt;
fi

SRC_LANG=$1;
TRG_LANG=$2;
MODEL=$3;
OUTPUT_DIR=$4;
ATTEMPT=$5;
FILE_NAME=$6;

if [[ $FILE_NAME ]]; then
  python3 src/test/compile_codenet.py --source_lang $SRC_LANG --target_lang $TRG_LANG --model $MODEL --report_dir $OUTPUT_DIR --file_name $FILE_NAME;
  python3 src/test/compile_codenet_feedback.py --source_lang $SRC_LANG --target_lang $TRG_LANG --model $MODEL --report_dir $OUTPUT_DIR --attempt $ATTEMPT --file_name $FILE_NAME;
else
  python3 src/test/compile_codenet.py --source_lang $SRC_LANG --target_lang $TRG_LANG --model $MODEL --report_dir $OUTPUT_DIR;
  python3 src/test/compile_codenet_feedback.py --source_lang $SRC_LANG --target_lang $TRG_LANG --model $MODEL --report_dir $OUTPUT_DIR --attempt $ATTEMPT;
fi