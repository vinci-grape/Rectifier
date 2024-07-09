# Python code equivalent to the given Java code

import sys

n, m = map(int, input().split())
map = {}
countAc = 0
countWaAll = 0

for i in range(m):
    question, waOrAc = map(str, input().split())
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
            continue
        else:
            if waOrAc == "WA":
                map[question] += 1
            else:
                map[question] = -countWa
                countAc += 1
                countWaAll += countWa

print(countAc, countWaAll)