def main():
  N = int(raw_input())
  A = [int(i) for i in raw_input().split()]
  A.sort(reverse=True)
  max = inf
  for i in xrange(1, N):
    if max > abs(A[0] - 2 * A[i]):
      max = abs(A[0] - 2 * A[i])
      index = i
  print A[0], A[index]

main()