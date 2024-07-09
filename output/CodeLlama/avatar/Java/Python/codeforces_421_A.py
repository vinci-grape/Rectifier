import math
import nio.charset.IllegalCharsetNameException
import util
list1 = []
list2 = []
n = int(input())
a = int(input())
b = int(input())
for i in range(0, a):
    list1.append(int(input()))
for i in range(0, b):
    list2.append(int(input()))
for i in range(0, n):
    if list1.contains(i + 1):
        print(1 + " ", end="")
    else:
        print(2 + " ", end="")