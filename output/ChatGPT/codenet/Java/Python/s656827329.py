n = int(input())
a = list(map(int, input().split()))
count = 1
now = 0
bef = 0
for i in range(1, n):
  if a[i-1] < a[i]:
    now = 1
  elif a[i-1] > a[i]:
    now = -1
  else:
    continue
  if bef == 0:
    bef = now
  if bef != now:
    count += 1
    bef = 0
print(count)