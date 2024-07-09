import heapq

def solve():
    N = int(input())
    arr = list(map(int, input().split()))
    sum = 0
    q = []
    for i in range(len(arr)):
        heapq.heappush(q, arr[i])
        if arr[i] <= q[0]:
            sum += 1
    return sum

print(solve())