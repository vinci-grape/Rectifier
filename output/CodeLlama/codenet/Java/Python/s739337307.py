import sys

n, m = map(int, sys.stdin.readline().split())

map = {}

countAc = 0
countWaAll = 0

for i in range(m):
    question, waOrAc = sys.stdin.readline().split()
    question = int(question)

    if question not in map:
        if waOrAc == "WA":
            map[question] = 1
        else:
            map[question] = -1
            countAc += 1
    else:
        countWa = map[question]
        if countWa < 0:
            pass
        else:
            if waOrAc == "WA":
                map[question] = countWa + 1
            else:
                map[question] = -countWa
                countAc += 1
                countWaAll += countWa

print(countAc, countWaAll)