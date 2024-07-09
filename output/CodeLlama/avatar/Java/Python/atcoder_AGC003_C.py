import sys
import collections
import heapq

def main():
    N = int(sys.stdin.readline().rstrip())
    nums = []
    map = collections.defaultdict(int)
    for i in range(N):
        num = int(sys.stdin.readline().rstrip())
        nums.append(num)
        map[num] = i
    bin = 0
    diff = 0
    while nums:
        num = heapq.heappop(nums)
        idx = map[num]
        if (bin % 2) != (idx % 2):
            diff += 1
        bin += 1
        bin %= 2
    ans = diff // 2
    print(ans)