a = int(input())
ar = list(map(int, input().split()))

for i in range(len(ar)):
    max_val = max(ar[i] - ar[0], ar[-1] - ar[i])
    if i == 0:
        min_val = ar[i + 1] - ar[i]
    elif i == len(ar) - 1:
        min_val = ar[i] - ar[i - 1]
    else:
        min_val = min(ar[i] - ar[i - 1], ar[i + 1] - ar[i])
    print(min_val, max_val)