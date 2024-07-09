import sys
from typing import List, Tuple, Dict, Any
from collections import defaultdict
from heapq import heappop, heappush

class FastScanner:
    def __init__(self, stream):
        self._stream = stream
        self._queue = []

    def next(self) -> str:
        if not self._queue:
            self._queue = self._stream.readline().split()
        return self._queue.pop(0)

    def nextInt(self) -> int:
        return int(self.next())

    def nextLong(self) -> int:
        return int(self.next())

    def nextLine(self) -> str:
        return self._stream.readline()

    def nextDouble(self) -> float:
        return float(self.next())

    def nextArr(self, n: int) -> List[int]:
        return [self.nextInt() for _ in range(n)]

    def nextSort(self, n: int) -> List[int]:
        return sorted(self.nextArr(n))

    def nextPair(self) -> Tuple[int, int]:
        return self.nextInt(), self.nextInt()

    def nextPairArr(self, n: int) -> List[Tuple[int, int]]:
        return [self.nextPair() for _ in range(n)]

    def ready(self) -> bool:
        return bool(self._queue) or self._stream.ready()

class FastWriter:
    def __init__(self, stream):
        self._stream = stream

    def println(self, *args: Any) -> None:
        print(*args, file=self._stream)

    def close(self) -> None:
        self._stream.close()

class Main:
    def __init__(self, scanner: FastScanner, writer: FastWriter):
        self.sc = scanner
        self.pw = writer

    def ceildiv(self, x: int, y: int) -> int:
        return (x + y - 1) // y

    def mod(self, x: int, m: int) -> int:
        return (x % m + m) % m

    def gcd(self, x: int, y: int) -> int:
        return x if y == 0 else self.gcd(y, x % y)

    def Int(self, x: bool) -> int:
        return 1 if x else 0

    def put(self, map: Dict[Tuple[int, int], int], p: Tuple[int, int]) -> None:
        if p in map:
            map[p] += 1
        else:
            map[p] = 1

    def rem(self, map: Dict[Tuple[int, int], int], p: Tuple[int, int]) -> None:
        if map[p] == 1:
            del map[p]
        else:
            map[p] -= 1

    def solve(self) -> None:
        n = self.sc.nextInt()
        arr = self.sc.nextSort(n)
        arr.sort(reverse=True)
        if n >= 3:
            map = {}
            ans = arr[0] + arr[1]
            self.put(map, (arr[0], arr[1]))
            p1 = (arr[2], arr[1])
            p2 = (arr[2], arr[0])
            self.put(map, p1)
            self.put(map, p2)
            for i in range(3, n):
                p = max(map)
                self.rem(map, p)
                ans += min(p[0], p[1])
                self.put(map, (p[0], arr[i]))
                self.put(map, (p[1], arr[i]))
            self.pw.println(ans)
        else:
            self.pw.println(arr[0])

if __name__ == "__main__":
    scanner = FastScanner(sys.stdin)
    writer = FastWriter(sys.stdout)
    Main(scanner, writer).solve()