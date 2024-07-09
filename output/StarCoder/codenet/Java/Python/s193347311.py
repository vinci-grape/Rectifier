import sys

def main():
    intLoop = int(sys.stdin.readline())
    strTaro = ""
    strHana = ""
    intTaro = 0
    intHana = 0

    for i in range(intLoop):
        strTaro = sys.stdin.readline().strip()
        strHana = sys.stdin.readline().strip()
        intJudge = cmp(strTaro, strHana)
        if intJudge < 0:
            intHana += 3
        elif intJudge == 0:
            intTaro += 1
            intHana += 1
        elif intJudge > 0:
            intTaro += 3

    print(intTaro, intHana)

if __name__ == "__main__":
    main()