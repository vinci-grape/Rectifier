import sys

def main():
    for line in sys.stdin:
        my1, my2, enemy1 = map(int, line.split())
        used = [False] * 11
        used[my1] = True
        used[my2] = True
        used[enemy1] = True
        all = 0
        safe = 0
        for i in range(1, 11):
            if not used[i]:
                all += 1
                if my1 + my2 + i <= 20:
                    safe += 1
        if safe * 2 >= all:
            print("YES")
        else:
            print("NO")

if __name__ == '__main__':
    main()