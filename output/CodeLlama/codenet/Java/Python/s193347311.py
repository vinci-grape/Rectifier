import sys

intLoop = int(sys.stdin.readline())
strTaro = ""
strHana = ""
intTaro = 0
intHana = 0

for i in range(intLoop):
    strTaro = sys.stdin.readline().rstrip()
    strHana = sys.stdin.readline().rstrip()
    intJudge = strTaro.compare(strHana)
    if intJudge < 0:
        intHana += 3
    elif intJudge == 0:
        intTaro += 1
        intHana += 1
    elif 0 < intJudge:
        intTaro += 3

print(intTaro, intHana)