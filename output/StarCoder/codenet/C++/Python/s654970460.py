n = int(input())
a = list(map(int, input().split()))
print(a[n-1], end = " ")
for i in range(1,n):
    print(a[n-i-1], end = " ")
print()