import math
import os
import random
import re
import sys

# Complete the codeforces_148_B function below.
def codeforces_148_B(VP, VD, T, F, C):
    if VD <= VP:
        return 0
    answer = 0
    start = T
    while True:
        x = start * VP / (VD - VP)
        if (start + x) * VP >= C:
            break
        start += 2 * x + F
        answer += 1
    return answer

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    VP = float(input())

    VD = float(input())

    T = float(input())

    F = float(input())

    C = float(input())

    result = codeforces_148_B(VP, VD, T, F, C)

    fptr.write(str(result) + '\n')

    fptr.close()