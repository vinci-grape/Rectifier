A, B = map(int, input().split())

if A < 13 and A >= 6:
    print(B // 2)
if A < 6:
    print(0)
if A >= 13:
    print(B)