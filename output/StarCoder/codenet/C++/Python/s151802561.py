n = int(raw_input())
A = [int(x) for x in raw_input().split()]
swaps = 0
for i in range(n):
    min_index = i
    for j in range(i, n):
        if A[j] < A[min_index]:
            min_index = j
    if i!= min_index:
        A[i], A[min_index] = A[min_index], A[i]
        swaps += 1
print " ".join(str(x) for x in A)
print swaps