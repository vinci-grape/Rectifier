def main(args):
    scan = Scanner(BufferedInputStream(System.in))
    N = scan.nextInt()
    arr = [scan.nextInt() for _ in range(N)]
    tsk = Task()
    print(tsk.solve(arr))


class Task:
    def solve(self, arr):
        n = len(arr)
        sorted = arr[:]
        sorted.sort()
        total = (n * (n + 1)) // 2
        l = 0
        r = n - 1
        while l < r:
            mid = l + (r - l) // 2
            target = sorted[mid]
            cur = 0
            cnt = 0
            bit = [0] * (2 * n + 2)
            for x in range(n + 1, bit.length):
                bit[x] += 1
            for i in range(n):
                cur += arr[i] <= target and 1 or - 1
                for x in range(cur + n + 1, bit.length):
                    bit[x] += bit[x - cur - n - 1]
                for x in range(cur + n):
                    cnt += bit[x]
            if cnt >= total // 2 + 1:
                r = mid
            else:
                l = mid + 1
        return sorted[l]