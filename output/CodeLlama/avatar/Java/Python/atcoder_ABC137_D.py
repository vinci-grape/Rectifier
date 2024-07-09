import collections
import heapq
import sys


class Job:
    def __init__(self, a, b):
        self.a = a
        self.b = b

    def __lt__(self, other):
        if self.a == other.a:
            return self.b < other.b
        return self.a < other.a


N, M = map(int, sys.stdin.readline().split())
q = []
for _ in range(N):
    a, b = map(int, sys.stdin.readline().split())
    q.append(Job(a, b))

cnt = 0
jobQ = []
for i in range(1, M + 1):
    while q:
        job = q[0]
        if job.a <= i:
            heapq.heappush(jobQ, -job.b)
            q.pop(0)
        else:
            break
    if jobQ:
        cnt += -heapq.heappop(jobQ)
print(cnt)