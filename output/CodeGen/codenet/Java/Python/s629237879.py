import sys

def main():
    sc = sys.stdin.readline()
    n = int(sc)
    str = []
    for i in range(n):
        str.append(sys.stdin.readline())
    mark = ["S","H","C","D"]
    for ma in mark:
        for i in range(1,13):
            s = str(i)
            st = ma + " " + s
            if st in str:
                continue
            else:
                print(st)

if __name__ == '__main__':
    main()