def count(hw, a, b):
  sum = 0
  for i in range(len(hw)):
    for j in range(len(hw[0])):
      if a >> i & 1 and b >> j & 1 and hw[i][j] == 1:
        sum += 1
  return sum

def pow2(a):
  ret = 1
  for i in range(a):
    ret *= 2
  return ret

def main():
  h, w, k = map(int, raw_input().split())
  hw = [[0 for _ in range(w)] for _ in range(h)]
  for i in range(h):
    for j in range(w):
      hw[i][j] = raw_input() == '#'
  sum = 0
  for i in range(pow2(h)):
    for j in range(pow2(w)):
      if count(hw, i, j) == k:
        sum += 1
  print sum

if __name__ == '__main__':
  main()