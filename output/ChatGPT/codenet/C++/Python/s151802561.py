def selection_sort(A):
    n = len(A)
    sw = 0

    for i in range(n):
        mini = i
        for j in range(i, n):
            if A[j] < A[mini]:
                mini = j
        A[i], A[mini] = A[mini], A[i]
        if i != mini:
            sw += 1

    return A, sw

n = int(input())
A = list(map(int, input().split()))

sorted_A, swaps = selection_sort(A)

print(*sorted_A)
print(swaps)