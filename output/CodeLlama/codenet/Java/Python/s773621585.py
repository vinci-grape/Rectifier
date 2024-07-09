import sys

n = int(sys.stdin.readline())
map = {}
for i in range(n):
    map[sys.stdin.readline()] = ""

print(len(map))