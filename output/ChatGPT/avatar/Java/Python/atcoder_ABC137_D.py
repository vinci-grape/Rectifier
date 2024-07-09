import heapq

class Job:
    def __init__(self, a, b):
        self.a = a
        self.b = b

    def __lt__(self, otherJob):
        if otherJob.a == self.a:
            return self.b < otherJob.b
        else:
            return self.a < otherJob.a

N, M = map(int, input().split())
q = []

for _ in range(N):
    a, b = map(int, input().split())
    heapq.heappush(q, Job(a, b))

cnt = 0
jobQ = []

for i in range(1, M+1):
    while q:
        job = q[0]
        if job.a <= i:
            heapq.heappush(jobQ, -heapq.heappop(q).b)
        else:
            break
    if jobQ:
        cnt += -heapq.heappop(jobQ)

print(cnt)