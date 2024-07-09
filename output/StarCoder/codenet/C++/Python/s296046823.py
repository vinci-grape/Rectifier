N, K = map(int, input().split())
v = list(map(int, input().split()))

# ceil((N-1) / (K-1))
count = ((N - 1) + ((K - 1) - 1)) // (K - 1)
print(count)