n = int(input())
l = []
r = []
for i in range(n):
  l.append(int(input()))
  r.append(int(input()))

sum = 0
for i in range(n):
  sum += r[i] - l[i] + 1

print(sum)