n, m = map(int, input().split())
a = []

if n % m == 0:
    a = [n // m] * m
else:
    sub = n // m
    a = [sub] * m
    test = n - (sub * m)
    count = 0
    for i in range(test):
        a[count] += 1
        count += 1
        if count >= len(a):
            count = 0

print(*a[::-1])  # Print the elements of a in reverse order