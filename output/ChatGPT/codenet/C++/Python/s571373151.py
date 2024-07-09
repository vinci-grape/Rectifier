n, m = map(int, input().split())

foods = [0] * m

for i in range(n):
    k = int(input())
    for j in range(k):
        temp = int(input()) - 1
        foods[temp] += 1

ans = sum(elem == n for elem in foods)
print(ans)