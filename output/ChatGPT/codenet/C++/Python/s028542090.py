k = int(input())
a = []

for i in range(k):
    a.append(int(input()))

max_val = 3
min_val = 2

if a[k - 1] != 2:
    print(-1)
    exit(0)

for i in range(k - 2, -1, -1):
    if a[i] > max_val:
        print(-1)
        exit(0)
    else:
        max_val = ((max_val // a[i]) + 1) * a[i] - 1
        if min_val % a[i] != 0:
            min_val = ((min_val // a[i]) + 1) * a[i]

    if max_val <= min_val:
        print(-1)
        exit(0)

print(min_val, max_val)