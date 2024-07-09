import math
import os
import random
import re
import sys



if __name__ == '__main__':
    n = int(input())
    if n % 10 == 9 or n // 10 == 9:
        print("Yes")
    else:
        print("No")