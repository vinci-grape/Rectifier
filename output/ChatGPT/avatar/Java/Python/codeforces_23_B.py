def maxLeft(n):
    return n - 2 if n > 2 else 0

t = int(input())
for i in range(t):
    n = int(input())
    print(maxLeft(n))