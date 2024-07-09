n = int(input())
list = list(map(int, input().split()))
list.sort()
c = 1
for i in range(n):
    if list[i] >= c:
        c += 1
print(c)