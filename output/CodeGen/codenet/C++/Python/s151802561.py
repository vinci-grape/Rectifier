def main():
  A = [int(i) for i in raw_input().strip().split()]
  n = int(raw_input().strip())
  for i in xrange(n):
    mini = i
    for j in xrange(i, n):
      if A[j] < A[mini]:
        mini = j
    t = A[i]
    A[i] = A[mini]
    A[mini] = t
    if i!= mini:
      sw += 1
  for i in xrange(n):
    if i:
      print " "
    print A[i]
  print
  print sw

main()