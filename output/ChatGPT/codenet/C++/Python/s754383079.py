a = input()
n = len(a)
b = input()
m = len(b)
ans = float('inf')

for i in range(1, n - m + 2):
    sum = 0
    for j in range(1, m + 1):
        if a[i + j - 1] != b[j]:
            sum += 1
    ans = min(ans, sum)

print(ans)