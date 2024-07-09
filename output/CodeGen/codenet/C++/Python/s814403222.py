def main():
  n = int(raw_input())
  m = int(raw_input())
  v = []
  for i in range(n):
    v.append(P(0, ''))
  for i in range(m):
    a = int(raw_input())
    v[a].first += n - len(d[a])
    for j in range(len(d[a])):
      v[d[a][j]].first -= 1
      d[a].append(i)
  for i in range(n):
    print v[i].first, v[i].second

if __name__ == '__main__':
  main()