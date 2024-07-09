import math
import os
import random
import re
import sys



if __name__ == '__main__':
    h1 = int(input())

    m1 = int(input())

    h2 = int(input())

    m2 = int(input())

    k = int(input())

    t1 = h1 * 60 + m1

    t2 = h2 * 60 + m2

    print(t2-t1-k)