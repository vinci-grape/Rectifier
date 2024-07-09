import sys

for line in sys.stdin:
    x, a, y = map(int, line.split())
    if x == 5 or x == 7 or a == 5 or a == 7 or y == 5 or y == 7:
        if x + y + a == 17:
            print("YES")
        else:
            print("NO")
    else:
        print("NO")