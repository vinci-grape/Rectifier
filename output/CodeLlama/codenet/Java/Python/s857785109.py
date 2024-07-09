import math
import os
import random
import re
import sys


if __name__ == '__main__':
    n = int(input())
    if (n/10)%111==0:
        print("Yes")
    elif (n%1000)%111==0:
        print("Yes")
    else:
        print("No")