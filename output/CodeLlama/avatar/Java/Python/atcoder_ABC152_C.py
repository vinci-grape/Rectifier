import sys
import heapq

def solve():
    N = int(sys.stdin.readline())
    arr = [int(sys.stdin.readline()) for _ in range(N)]
    sum = 0
    q = []
    for i in range(N):
        heapq.heappush(q, arr[i])
        if arr[i] <= q[0]:
            sum += 1
    return sum


if __name__ == '__main__':
    print(solve())