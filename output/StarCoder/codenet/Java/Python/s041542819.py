import sys
import math
from collections import defaultdict
from itertools import accumulate
from bisect import bisect_left
from functools import reduce
from operator import mul
from fractions import gcd
from math import ceil, floor, sqrt, factorial, log, pi, e, inf
from random import random, randint, choice, shuffle
from string import ascii_lowercase, ascii_uppercase, digits
from heapq import heappush, heappop, heapify
from time import time
from pprint import pprint
from sys import setrecursionlimit as setreclim
from sys import maxsize

# from numba import njit, i8, b1, f8, u8, u4, u2, jitclass, float32, int32, int64, boolean
# from numba.experimental import jitclass
# from numba.types import int32, int64, float64, boolean, void
# from numba.typed import List

# from numba.pycc import CC
# cc = CC('my_module')
# cc.export('solve', solve.__doc__.strip().split()[0])(solve)
# cc.compile()
# exit()

# @jitclass([('a', int32)])
# class DLazyFaith:
#     def __init__(self, a):
#         self.a = a

#     def solve(self, testNumber, in, out):
#         a, b, q = in.ints()
#         s = in.longs()
#         t = in.longs()
#         s = [0] + s + [20000000000]
#         t = [0] + t + [20000000000]
#         for i in range(q):
#             x = in.longs()
#             sl = x - s[max(0, bisect_left(s, x + 1) - 1)]
#             tl = x - t[max(0, bisect_left(t, x + 1) - 1)]
#             sr = s[bisect_left(s, x)] - x
#             tr = t[bisect_left(t, x)] - x
#             out.ansln(min(
#                 max(sl, tl),
#                 max(sr, tr),
#                 2 * sl + tr,
#                 2 * tl + sr,
#                 sl + 2 * tr,
#                 tl + 2 * sr
#             ))

# @njit(int32(int32, int32[:], int32[:], int32[:]), cache=True)
# def solve(testNumber, a, b, q):
#     s = [0] + a + [20000000000]
#