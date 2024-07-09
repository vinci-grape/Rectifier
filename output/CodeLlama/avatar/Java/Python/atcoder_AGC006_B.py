import sys

n, x = map(int, sys.stdin.readline().split())
max = 2 * n - 1
if x == 1 or x == max:
    print("No")
    exit()
print("Yes")
ans = ""
for i in range(x + n - 1, x + n + max - 1):
    ans += str(i % max + 1) + "\n"
print(ans)