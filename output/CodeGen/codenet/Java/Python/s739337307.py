def main():
    n = int(input())
    m = int(input())
    map = {}
    countAc = 0
    countWaAll = 0
    for i in range(m):
        question = int(input())
        waOrAc = input()
        if not map.has_key(question):
            if waOrAc == 'WA':
                map[question] = 1
            else:
                map[question] = -1
                countAc += 1
        else:
            countWa = map[question]
            if countWa < 0:
                countWa += 1
                countAc += 1
                countWaAll += countWa
            else:
                if waOrAc == 'WA':
                    countWa += 1
                    countWaAll += 1
                else:
                    countWa -= 1
                    countAc += 1
                    countWaAll += countWa
    print(countAc, countWaAll)

if __name__ == '__main__':
    main()