import heapq

class Main:
    def __init__(self, N, A):
        A.sort(reverse=True)
        res = 0
        q = []
        heapq.heappush(q, [-A[N - 1], -A[N - 1]])

        for i in range(N - 2, -1, -1):
            a = A[i]
            place = heapq.heappop(q)
            res += min(-place[0], -place[1])
            heapq.heappush(q, [-place[0], -a])
            heapq.heappush(q, [-a, -place[1]])
        print(res)

# Input parsing
N = int(input())
A = list(map(int, input().split()))

# Solving
sol = Main(N, A)