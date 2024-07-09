while True:
  str = input()
  strArr = str.split(",")
  l = [int(x) for x in strArr[:10]]
  d = sum(l)
  v = [int(strArr[10]), int(strArr[11])]
  t = d / (v[0] + v[1])
  d = 0
  for i in range(11):
    if v[0] * t <= d:
      print(i)
      break
    else:
      d += l[i]