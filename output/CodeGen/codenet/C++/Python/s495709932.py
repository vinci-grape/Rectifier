def main():
  N = int(input())
  A = [int(x) for x in input().split()]
  answer = 0
  for i in range(N - 1):
    for j in range(i + 1, N):
      diff = abs(A[i] - A[j])
      answer = max(answer, diff)
  print(answer)

if __name__ == '__main__':
  main()