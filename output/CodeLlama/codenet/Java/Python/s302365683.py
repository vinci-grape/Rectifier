import sys

n = int(sys.stdin.readline())
hm = {}
for i in range(n):
    val = int(sys.stdin.readline())
    hm[val] = hm.get(val, 0) + 1
ans = 0
for val in hm.keys():
    num = hm[val]
    if num > val:
        ans += num - val
    elif num < val:
        ans += num
print(ans)