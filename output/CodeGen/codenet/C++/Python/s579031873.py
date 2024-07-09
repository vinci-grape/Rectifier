def main():
  N, X = map(int, raw_input().split())
  table = []
  for i in range(N):
    table.append(map(int, raw_input().split()))
  roads = []
  for i in range(N):
    roads.append(map(int, raw_input().split()))
  qs = []
  for i in range(N):
    qs.append(map(int, raw_input().split()))
  ans = 0
  min = 1000000000
  for i in range(N):
    tmp = 0
    for j in range(N):
      tmp += table[i][j]
    X -= tmp
    ans += 1
    if tmp < min: min = tmp
  ans += X / min
  print ans

if __name__ == '__main__':
  main()