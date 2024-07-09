n = int(input())
a = list(map(int, input().split()))

a.sort()

for i in range(len(a)-1):
    if a[i+1] < a[i] * 2 and a[i] != a[i+1]:
        print("YES")
        exit()

print("NO")