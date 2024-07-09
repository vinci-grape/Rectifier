# -*- coding: utf-8 -*-
import sys
import math
import string
import bisect
import itertools
import heapq
import collections
import time
import random
import functools
import operator
import re
import array
import copy
import queue
import statistics
import dataclasses
import cmath
import fractions
import decimal
import collections
import itertools
import sys
from bisect import bisect_left, bisect_right
from collections import deque, Counter, defaultdict, OrderedDict
from copy import deepcopy
from functools import lru_cache
from heapq import heappop, heappush
from itertools import combinations, permutations, product
from math import gcd, sin, cos, tan, degrees, radians
from string import ascii_lowercase, ascii_uppercase, digits, hexdigits, octdigits
from typing import List, Set, Dict, Tuple, Optional, Sequence, Union, Any, Callable

def main():
    N, K = map(int, input().split())
    A = [0] + list(map(int, input().split()))
    B = [-1] * 200100
    now = 1
    cnt = 0
    for i in range(1, N + 1):
        B[i] = 0
    B[1] = 0
    for j in range(1, K + 1):
        now = A[now]
        if B[now] == -1:
            B[now] = j
        else:
            cnt = j
            break
    if j < K:
        tmp = (K - B[now]) % (cnt - B[now])
        for j in range(0, tmp):
            now = A[now]
    print(now)

if __name__ == "__main__":
    main()