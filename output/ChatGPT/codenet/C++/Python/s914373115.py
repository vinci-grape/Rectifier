def B():
    x = int(input())
    i = 0
    sum = 100
    while sum < x:
        sum += sum // 100
        i += 1
    print(i)

B()