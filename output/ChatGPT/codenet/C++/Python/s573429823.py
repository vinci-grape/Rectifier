n = int(input())

if n < 4:
    print("No")
else:
    flg = False
    for i in range(n // 4 + 1):
        for j in range(n // 7 + 1):
            if i * 4 + j * 7 == n:
                flg = True
                break
        if flg:
            break
    
    if flg:
        print("Yes")
    else:
        print("No")