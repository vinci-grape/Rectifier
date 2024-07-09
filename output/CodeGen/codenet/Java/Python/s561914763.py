def isMatch(N, tap):
    isGood = True
    for i in range(0, len(N)):
        if (i + 1) % 2 == 0:
            if not isMatch(EVE, tap[i]):
                isGood = False
                break
        else:
            if not isMatch(ODD, tap[i]):
                isGood = False
                break
    return isGood


def main():
    N = input()
    tap = list(N)
    isGood = isMatch(N, tap)
    print(isGood)


if __name__ == "__main__":
    main()