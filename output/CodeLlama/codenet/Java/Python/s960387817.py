import sys

n = int(sys.stdin.readline())
set = set()
for i in range(n):
    set.add(int(sys.stdin.readline()))
print(len(set))