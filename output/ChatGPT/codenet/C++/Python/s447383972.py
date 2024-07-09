n = int(input())
a = list(map(int, input().split()))
a.sort()
q = []
for i in range(1, n):
    if a[i] == a[i+1]:
        q.append(a[i])
q.sort()
print(q[-1] * q[-2])