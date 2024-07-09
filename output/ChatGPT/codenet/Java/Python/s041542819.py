import sys
from typing import List, Tuple


def solve(a: int, b: int, q: int, s: List[int], t: List[int]) -> List[int]:
    s = [-10**18] + s + [10**18]
    t = [-10**18] + t + [10**18]
    res = []
    for _ in range(q):
        x = int(input())
        sl = x - s[bisect_right(s, x) - 1]
        tl = x - t[bisect_right(t, x) - 1]
        sr = s[bisect_left(s, x)] - x
        tr = t[bisect_left(t, x)] - x
        res.append(min(
            max(sl, tl),
            max(sr, tr),
            2 * sl + tr,
            2 * tl + sr,
            sl + 2 * tr,
            tl + 2 * sr
        ))
    return res


def from_input_string(input_string: str) -> Tuple:
    input_lines = input_string.strip().split('\n')
    a, b, q = map(int, input_lines[0].split())
    s = list(map(int, input_lines[1:a+1]))
    t = list(map(int, input_lines[a+1:]))
    return a, b, q, s, t


def from_output_string(output_string: str) -> List[int]:
    return list(map(int, output_string.strip().split('\n')))


def to_input_string(inputs: Tuple) -> str:
    a, b, q, s, t = inputs
    res = []
    res.append(f'{a} {b} {q}')
    res.extend(map(str, s))
    res.extend(map(str, t))
    return '\n'.join(res)


def to_output_string(output: List[int]) -> str:
    return '\n'.join(map(str, output))


# The code below utilizes binary search to find the lower bound of a target value in a sorted array.


def bisect_left(arr, x):
    left = 0
    right = len(arr)
    while left < right:
        mid = (left + right) // 2
        if arr[mid] < x:
            left = mid + 1
        else:
            right = mid
    return left


def bisect_right(arr, x):
    left = 0
    right = len(arr)
    while left < right:
        mid = (left + right) // 2
        if arr[mid] <= x:
            left = mid + 1
        else:
            right = mid
    return left