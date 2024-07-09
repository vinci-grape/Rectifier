import sys
import heapq

class atcoder_AGC003_C:
    def main(self):
        N = int(sys.stdin.readline())
        map = {}
        nums = []
        for i in range(N):
            tmp = int(sys.stdin.readline())
            nums.append(tmp)
            map[tmp] = i
        bin = 0
        diff = 0
        while nums:
            num = heapq.heappop(nums)
            idx = map[num]
            if (bin % 2)!= (idx % 2):
                diff += 1
            bin += 1
            bin %= 2
        ans = diff // 2
        print(ans)

if __name__ == '__main__':
    atcoder_AGC003_C().main()