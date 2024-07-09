import math
import os
import random
import re
import sys


if __name__ == '__main__':
    h = int(input())
    a = int(input())
    if h % a == 0:
        print(h // a)
    else:
        print(h // a + 1)