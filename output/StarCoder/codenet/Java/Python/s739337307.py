import sys

if __name__ == "__main__":
    n = int(sys.stdin.readline())
    m = int(sys.stdin.readline())

    map = {}
    countAc = 0
    countWaAll = 0

    for i in range(m):
        question = int(sys.stdin.readline())
        waOrAc = sys.stdin.readline()

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
                    map[question] = countWa + 1
                else:
                    map[question] = -countWa
                    countAc += 1
                    countWaAll += countWa

    print(countAc, countWaAll)