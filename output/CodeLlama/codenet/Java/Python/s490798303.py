import sys

n, k = map(int, sys.stdin.readline().strip().split())

map = {}

for i in range(k):
    d = int(sys.stdin.readline().strip())
    for j in range(d):
        person = int(sys.stdin.readline().strip())

        if person not in map:
            map[person] = []
        map[person].append(d)

count = 0
for i in range(1, n + 1):
    if i not in map:
        count += 1

print(count)