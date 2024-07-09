n, m = map(int, input().split())
po = list(map(int, input().split()))
m -= sum(po)

po.sort()
print(n + m // po[0])