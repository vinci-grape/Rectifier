import sys

def Answer(y, m, d):
    result = 1

    if y % 3 == 0:
        result += 20 - d
    elif m % 2 == 0:
        result += 19 - d
    else:
        result += 20 - d

    for m in range(m+1, 11):
        if y % 3 == 0:
            result += 20
        else:
            if m % 2 == 0:
                result += 19
            else:
                result += 20

    for y in range(y+1, 1000):
        if y % 3 == 0:
            result += 200
        else:
            result += 195

    return result

if __name__ == "__main__":
    for line in sys.stdin:
        y, m, d = map(int, line.split())
        print(Answer(y, m, d))