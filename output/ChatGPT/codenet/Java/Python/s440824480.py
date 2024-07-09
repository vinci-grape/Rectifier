n = int(input())
c = 0
flg = 0
while n > 0:
    x, y = map(int, input().split())
    if x == y:
        c += 1
        if c >= 3:
            flg = 1
    else:
        c = 0
    n -= 1
if flg == 0:
    print("No")
else:
    print("Yes")