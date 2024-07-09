N = int(input())
X = int(input())
m = [0] * N
m[0] = int(input())
X -= m[0]
min_val = m[0]
for i in range(1, N):
    m[i] = int(input())
    X -= m[i]
    if m[i] < min_val:
        min_val = m[i]
print(N + X // min_val)