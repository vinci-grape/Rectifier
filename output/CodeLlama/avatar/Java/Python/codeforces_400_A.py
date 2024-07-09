import sys

def isSolution(columnsCount, x):
    allXs = [True] * columnsCount
    for i in range(12):
        if x[i] != 'X':
            allXs[i % columnsCount] = False
    for i in range(columnsCount):
        if allXs[i]:
            return True
    return False


def main():
    t = int(sys.stdin.readline())
    for i in range(t):
        possibleSolutions = 0
        solutions = ''
        s = sys.stdin.readline()
        if isSolution(12, s):
            solutions += ' 1x12'
            possibleSolutions += 1
        if isSolution(6, s):
            solutions += ' 2x6'
            possibleSolutions += 1
        if isSolution(4, s):
            solutions += ' 3x4'
            possibleSolutions += 1
        if isSolution(3, s):
            solutions += ' 4x3'
            possibleSolutions += 1
        if isSolution(2, s):
            solutions += ' 6x2'
            possibleSolutions += 1
        if isSolution(1, s):
            solutions += ' 12x1'
            possibleSolutions += 1
        print(possibleSolutions, solutions)


if __name__ == '__main__':
    main()