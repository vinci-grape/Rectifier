a, b, c, d = map(int, input().split())
if (a*b%2==1 and (c+d)%2==1):
    print("No")
else:
    print("Yes")