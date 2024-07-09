import math

a, b = map(int, input().split())
flag = False
for i in range(1, 100001):
    if math.floor(i * 0.08) == a and b == math.floor(i * 0.1):
        print(i)
        flag = True
        break
if not flag:
    print(-1)