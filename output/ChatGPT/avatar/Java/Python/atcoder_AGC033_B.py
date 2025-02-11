def main():
  h, w, n = map(int, input().split())
  sr, sc = map(int, input().split())
  s = input()
  t = input()
  end = False
  usafe = 1
  dsafe = h
  for i in range(n-1, -1, -1):
    if s[i] == 'U':
      usafe += 1
    elif s[i] == 'D':
      dsafe -= 1
    if usafe > dsafe:
      end = True
      break
    if i > 0:
      if t[i-1] == 'U':
        dsafe = min(dsafe + 1, h)
      elif t[i-1] == 'D':
        usafe = max(usafe - 1, 1)
  lsafe = 1
  rsafe = w
  for i in range(n-1, -1, -1):
    if s[i] == 'L':
      lsafe += 1
    elif s[i] == 'R':
      rsafe -= 1
    if lsafe > rsafe:
      end = True
      break
    if i > 0:
      if t[i-1] == 'L':
        rsafe = min(rsafe + 1, w)
      elif t[i-1] == 'R':
        lsafe = max(lsafe - 1, 1)
  if sr >= usafe and sr <= dsafe and sc >= lsafe and sc <= rsafe and not end:
    print("YES")
  else:
    print("NO")

if __name__ == "__main__":
  main()