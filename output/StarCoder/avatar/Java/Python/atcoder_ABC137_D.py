import heapq

class Job:
    def __init__(self, a, b):
        self.a = a
        self.b = b

    def __lt__(self, other):
        if self.a == other.a:
            return self.b < other.b
        else:
            return self.a < other.a

N, M = map(int, input().split())

q = []
for _ in range(N):
    a, b = map(int, input().split())
    heapq.heappush(q, Job(a, b))

cnt = 0
jobQ = []
for i in range(1, M+1):
    while q and q[0].a <= i:
        heapq.heappush(jobQ, heapq.heappop(q).b)
    if jobQ:
        cnt += heapq.heappop(jobQ)

print(cnt)