import sys

def main():
    Sd = sys.stdin.readline().strip()
    T = sys.stdin.readline().strip()
    count = 0
    ok = False
    first = -1
    end = -1
    for j in range(len(Sd)):
        count = 0
        for i in range(len(Sd)-j):
            if Sd[i+j] == '?' or Sd[i+j] == T[count]:
                count += 1
                if count == len(T):
                    first = i+j - len(T) + 1
                    end = i+j
                    ok = True
                    break
            else:
                count = 0
    if ok:
        for i in range(len(Sd)):
            if first <= i and i <= end:
                print(T[i - first], end='')
            else:
                if Sd[i] == '?':
                    print('a', end='')
                else:
                    print(Sd[i], end='')
        print()
    else:
        print("UNRESTORABLE")

if __name__ == "__main__":
    main()