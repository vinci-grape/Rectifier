while True:
    m, f, r = map(int, input().split())
    if m == -1 and f == -1 and r == -1:
        break
    if m == -1 or f == -1:
        print('F')
    elif m + f >= 80:
        print('A')
    elif m + f >= 65:
        print('B')
    elif m + f >= 50 or r >= 50:
        print('C')
    elif m + f >= 30:
        print('D')
    else:
        print('F')