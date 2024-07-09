import math
import os
import random
import re
import sys



if __name__ == '__main__':
    A = int(input())
    B = int(input())
    if A%3==0 or B%3==0 or (A+B)%3==0:
        print("Possible")
    else:
        print("Impossible")