import sys

h, w = map(int, sys.stdin.readline().split())
ans = []
for _ in range(h):
    ans.append("#" + sys.stdin.readline().rstrip() + "#")
print("#" * (w + 2))
for s in ans:
    print(s)
print("#" * (w + 2))