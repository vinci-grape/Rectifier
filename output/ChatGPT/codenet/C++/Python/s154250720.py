maps = []
num = []

while True:
    try:
        n = int(input())
        for _ in range(n):
            x = int(input())
            maps.append(x)
            num.append(x)
        
        maps.sort()
        m = n // 2
        
        for i in range(n):
            if num[i] <= maps[m]:
                print(maps[m+1])
            else:
                print(maps[m])
    except EOFError:
        break