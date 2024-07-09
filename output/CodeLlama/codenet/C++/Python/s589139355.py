import math
import os
import random
import re
import sys



if __name__ == '__main__':
    a = int(input())
    t = 0
    h = 0
    for i in range(a):
        taro, hana = input().split()
        lt = len(taro)
        lh = len(hana)
        if lt > lh:
            l = lt
        else:
            l = lh
        tt = 0
        hh = 0
        if taro > hana:
            t = t + 3
        elif hana > taro:
            h = h + 3
        else:
            h = h + 1
            t = t + 1
    print(t, h)