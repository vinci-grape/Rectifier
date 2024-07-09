n = int(input())
a = list(map(int, input().split()))

swapCount = 0

for i in range(len(a)):
    mini = i

    for j in range(i, len(a)):
        if a[j] < a[mini]:
            mini = j

    if mini != i:
        a[mini], a[i] = a[i], a[mini]
        swapCount += 1

ans = ' '.join(map(str, a))

print(ans)
print(swapCount)