n = int(input())
map = {}
for i in range(n):
  a = int(input())
  if a in map:
    map[a] += 1
  else:
    map[a] = 1
ans = 0
for key in map:
  if map[key] % 2 == 1:
    ans += 1
print(ans)