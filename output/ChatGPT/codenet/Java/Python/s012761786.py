n, a, b = map(int, input().split())

sa = abs(a-b)

ans = 0

if sa % 2 == 0:
  ans = sa // 2
else:
  AAA = min((n-a), (a-1))
  BBB = min((n-b), (b-1))

  ans = min(AAA, BBB)

  sa -= 1
  ans += 1

  ans += sa // 2

print(ans)