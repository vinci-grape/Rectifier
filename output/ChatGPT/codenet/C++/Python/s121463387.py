n = int(input())

for i in range(1, n+1):
  x = i
  s = str(x)
  if x % 3 == 0 or x % 10 == 3:
    print(" ", i, end="")
    continue
  else:
    k = len(s)
    while k > 0:
      k = k - 1
      j = pow(10, k)
      if (x // j) % 10 == 3:
        print(" ", i, end="")
        break