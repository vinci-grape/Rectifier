n = int(input())
a = list(map(int, input().split()))

a.sort()
min = a[0]

for value in a:
    if value % min != 0:
        print(-1)
        exit()

print(min)