import sys
from typing import List, Tuple, Dict, Any, Union


def solve(n: int, nums: List[int]) -> int:
    dp = [0] * (n + 1)
    dp[0] = 1
    kek = {}
    prev = {}
    for i in range(1, n + 1):
        dp[i] = dp[i - 1] + (kek[nums[i - 1]] if prev.get(nums[i - 1]) != i - 1 else 0)
        dp[i] %= 10**9 + 7
        kek[nums[i - 1]] = dp[i]
        prev[nums[i - 1]] = i
    return dp[n]


def from_input_string(input_string: str) -> Tuple:
    lines = input_string.strip().split('\n')
    n = int(lines[0])
    nums = list(map(int, lines[1].strip().split()))
    return n, nums


def to_input_string(inputs: Tuple) -> str:
    n, nums = inputs
    res = []
    res.append(str(n))
    res.append(' '.join(str(x) for x in nums))
    return '\n'.join(res)


def from_output_string(output_string: str) -> Any:
    return int(output_string.strip())


def to_output_string(output: Any) -> str:
    return str(output)


def from_output_string(output_string: str) -> Any:
    return int(output_string.strip())


def to_output_string(output: Any) -> str:
    return str(output)


def from_output_string(output_string: str) -> Any:
    return int(output_string.strip())


def to_output_string(output: Any) -> str:
    return str(output)


if __name__ == '__main__':
    input_str = sys.stdin.read()
    inputs = from_input_string(input_str)
    print(inputs)