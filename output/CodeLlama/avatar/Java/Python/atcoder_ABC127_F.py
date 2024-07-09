import sys
import heapq


def main():
    input = sys.stdin.readline
    t = int(input())
    s = []
    pqmax = []
    pqmin = []
    sumMin = 0
    sumMax = 0
    sumb = 0
    min = 0
    while t > 0:
        t -= 1
        s = input().split()
        if s[0] == '2':
            ans = min
            ans *= len(pqmin)
            ans -= sumMin
            ans1 = min
            ans1 *= len(pqmax)
            ans1 = sumMax - ans1
            print(min, ans + ans1 + sumb)
        else:
            in = int(s[1])
            sumb += int(s[2])
            if in > min:
                heapq.heappush(pqmax, in)
                sumMax += in
            else:
                heapq.heappush(pqmin, in)
                sumMin += in
            if len(pqmin) > len(pqmax):
                sumMax += pqmin[0]
                sumMin -= pqmin[0]
                heapq.heappush(pqmax, heapq.heappop(pqmin))
            if len(pqmin) < len(pqmax):
                sumMax -= pqmax[0]
                sumMin += pqmax[0]
                heapq.heappush(pqmin, heapq.heappop(pqmax))
            min = pqmin[0]


if __name__ == "__main__":
    main()