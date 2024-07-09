import sys
input = sys.stdin.readline

n = int(input())

map = {}

while n > 0:
    num = int(input())
    if num not in map:
        map[num] = 1
    else:
        if map[num] == 1:
            del map[num]
        else:
            map[num] -= 1
            map[num] += 1
    n -= 1

ans = 0
for key in map:
    ans += map[key]

print(ans)