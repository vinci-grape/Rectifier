n = int(input())
pre = [0] * (n+1)

for i in range(1, n+1):
    pre[i] = pre[i-1] + int(input())

min_val = float('inf')

for i in range(1, n):
    val1 = pre[i]
    val2 = pre[n] - pre[i]
    
    min_val = min(min_val, abs(val1 - val2))

print(min_val)