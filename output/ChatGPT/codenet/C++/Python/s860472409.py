# Translate the above C++ code to Python

N = int(input())
A = list(map(int, input().split()))

i = 0
ans = 0
count = 0

while i+1 < len(A):
    if A[i] == A[i+1]:
        count += 1
        if count % 2 != 0:
            ans += 1
    else:
        count = 0
    i += 1

print(ans)