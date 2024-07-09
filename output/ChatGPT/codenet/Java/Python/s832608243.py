a, b = map(int, input().split())
flag = False
for i in range(1, 100001):
    if int(i * 0.08) == a and int(i * 0.1) == b:
        print(i)
        flag = True
        break
if not flag:
    print(-1)