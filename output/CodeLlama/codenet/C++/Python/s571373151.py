n, m = map(int, input().split())

foods = [0] * m

for i in range(n):
    k = int(input())

    for j in range(k):
        temp = int(input()) - 1

        foods[temp] += 1

ans = 0
for elem in foods:
    if elem == n:
        ans += 1

print(ans)