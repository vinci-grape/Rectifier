import sys
from typing import List, Tuple

def count_subarrays(n: int, a: List[int]) -> int:
    a.sort()
    count = 0
    for i in range(n-1):
        total_sum = sum(a[:i+1])
        if a[i+1] <= 2 * total_sum:
            count += 1
        else:
            count = 0
    return count + 1

def main() -> None:
    n = int(input())
    a = list(map(int, input().split()))
    result = count_subarrays(n, a)
    print(result)

if __name__ == "__main__":
    main()