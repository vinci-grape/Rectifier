import sys

h, w = map(int, sys.stdin.readline().split())
s = "snuke"

for i in range(h):
    for j in range(w):
        t = sys.stdin.readline().rstrip()
        if s == t:
            print(chr(ord('A') + j) + str(i + 1))
            exit(0)

print("No")