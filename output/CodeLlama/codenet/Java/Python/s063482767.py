import sys
import heapq

n = int(sys.stdin.readline().rstrip())
queue = []
for i in range(n):
    queue.append(int(sys.stdin.readline().rstrip()))
heapq.heapify(queue)
sum = 0
for i in range(n - 1):
    sum += heapq.heappop(queue)

# 出力
print("Yes" if heapq.heappop(queue) < sum else "No")