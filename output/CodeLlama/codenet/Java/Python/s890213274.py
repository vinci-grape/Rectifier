import math
import os
import random
import re
import sys



if __name__ == '__main__':
    A1 = int(input())
    A2 = int(input())
    A3 = int(input())

    if (A1 + A2 + A3) >= 22:
        print("bust")
    else:
        print("win")