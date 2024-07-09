import sys
import heapq
input = sys.stdin.readline

n, k = map(int, input().split())
a = list(map(int, input().split()))

heapq.heapify(a)
ans = 0
for _ in range(k):
    ans += heapq.heappop(a)
print(ans)