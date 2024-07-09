def find(li, from_index, target):
    low = from_index
    upp = len(li) - 1
    mid = (low + upp) // 2 + 1 if (upp - low + 1) % 2 == 0 else (low + upp) // 2

    if upp - low < 0:
        return 0
    elif li[from_index] >= target:
        return 0
    elif li[upp] < target:
        return upp - low + 1

    while upp - low > 1:
        if li[mid] >= target:
            upp = mid
        else:
            low = mid
        mid = (low + upp) // 2 + 1 if (upp - low + 1) % 2 == 0 else (low + upp) // 2

    return low - from_index + 1

N = int(input())
L = list(map(int, input().split()))
L.sort()
count = 0
for i in range(N):
    for j in range(i + 1, N):
        a = L[i]
        b = L[j]
        res = find(L, j + 1, a + b)
        count += res

print(count)