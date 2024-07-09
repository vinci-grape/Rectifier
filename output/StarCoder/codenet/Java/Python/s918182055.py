import sys
import heapq

class Main:

    def main(self):
        out = MyWriter(sys.stdout)
        sc = MyScanner(sys.stdin)
        N = sc.nextInt()
        M = sc.nextInt()
        list = [None] * 100001
        for i in range(N):
            a = sc.nextInt()
            b = sc.nextInt()
            if list[a] == None:
                list[a] = []
            list[a].append(b)
        res = 0
        pqueue = []
        for i in range(1, M + 1):
            if list[i]!= None:
                heapq.heapify(list[i])
            if len(pqueue) > 0:
                res += heapq.heappop(pqueue)
            if len(list[i]) > 0:
                heapq.heappush(pqueue, list[i].pop())
        out.