n, k = map(int, input().split())

map = {}

for i in range(k):
    d = int(input())
    for j in range(d):
        person = int(input())

        if person not in map:
            map[person] = []
        map[person].append(d)

count = 0
for i in range(1, n + 1):
    if i not in map:
        count += 1

print(count)