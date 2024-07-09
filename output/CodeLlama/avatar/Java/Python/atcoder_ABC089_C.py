import sys
import math
import string
import bisect
import collections
import heapq
import time
import random
import itertools
input = sys.stdin.readline


def main():
    n = int(input())
    cnt = [0] * 5
    for i in range(n):
        s = input().rstrip()
        if s[0] == 'M':
            cnt[0] += 1
        elif s[0] == 'A':
            cnt[1] += 1
        elif s[0] == 'R':
            cnt[2] += 1
        elif s[0] == 'C':
            cnt[3] += 1
        elif s[0] == 'H':
            cnt[4] += 1
    res = cnt[0] * cnt[1] * cnt[2] + cnt[0] * cnt[1] * cnt[3] + cnt[0] * cnt[1] * cnt[4] + cnt[0] * cnt[2] * cnt[3] + cnt[0] * cnt[2] * cnt[4] + cnt[0] * cnt[3] * cnt[4] + cnt[1] * cnt[2] * cnt[3] + cnt[1] * cnt[2] * cnt[4] + cnt[1] * cnt[3] * cnt[4] + cnt[2] * cnt[3] * cnt[4]
    print(res)


if __name__ == "__main__":
    main()