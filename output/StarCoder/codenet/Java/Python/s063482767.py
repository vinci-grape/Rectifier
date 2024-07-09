import heapq

n = int(input())

queue = []
for i in range(n):
    heapq.heappush(queue, int(input()))

sum = 0
for i in range(n - 1):
    sum += heapq.heappop(queue)

print("Yes" if heapq.heappop(queue) < sum else "No")