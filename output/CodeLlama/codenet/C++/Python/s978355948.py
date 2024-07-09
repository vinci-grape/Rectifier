N, X = map(int, input().split())
L = list(map(int, input().split()))

d = 0
for i in range(N):
    d = d + L[i]
    if d > X:
        break

print(i+1)