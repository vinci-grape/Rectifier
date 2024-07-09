import sys
import math
import collections
import heapq

def gcd(a, b):
    if a < b:
        return gcd(b, a)
    if b == 0:
        return a
    return gcd(b, a % b)

def lcm(a, b):
    return a * b / gcd(a, b)

def print(x):
    sys.stdout.write(str(x) + '\n')
    sys.stdout.flush()

def read_ints():
    n = int(sys.stdin.readline())
    ints = [int(x) for x in sys.stdin.readline().split()]
    return n, ints

def read_ints_heap():
    n = int(sys.stdin.readline())
    ints = []
    for i in range(n):
        ints.append(int(sys.stdin.readline()))
    heapq.heapify(ints)
    return n, ints

def read_ints_heap_sorted():
    n = int(sys.stdin.readline())
    ints = []
    for i in range(n):
        ints.append(int(sys.stdin.readline()))
    ints.sort()
    return n, ints

def read_ints_heap_sorted_reverse():
    n = int(sys.stdin.readline())
    ints = []
    for i in range(n):
        ints.append(int(sys.stdin.readline()))
    ints.sort()
    ints.reverse()
    return n, ints

def read_ints_heap_sorted_reverse_heap():
    n = int(sys.stdin.readline())
    ints = []
    for i in range(n):
        ints.append(int(sys.stdin.readline()))
    ints.sort()
    ints.reverse()
    heapq.heapify(ints)
    return n, ints

def read_ints_heap_sorted_reverse_heap_sorted():
    n = int(sys.stdin.readline())
    ints = []
    for i in range(n):
        ints.append(int(sys.stdin.readline()))
    ints.sort()
    ints.reverse()
    heapq.heapify(ints)
    ints.sort()
    return n, ints

def read_ints_heap_sorted_reverse_heap_sorted_reverse():
    n = int(sys.stdin.readline())
    ints = []
    for i in range(n):
        ints.append(int(sys.stdin.readline()))
    ints.sort()
    ints.reverse()
    heapq.heapify(ints)
    ints.sort()
    ints.reverse()
    return n, ints

def read_ints_heap_sorted_reverse_heap_sorted_reverse_heap():
    n = int(sys.stdin.readline())
    ints = []
    for i in range(n):
        ints.append(int(sys.stdin.readline()))
    ints.sort()
    ints.reverse()
    heapq.heapify(ints)
    ints.sort()
    ints.reverse()
    heapq.heapify(ints)
    return n, ints

def read_ints_heap_sorted_reverse_heap_sorted_reverse_heap_sorted():
    n = int(sys.stdin.readline())
    ints = []
    for i in range(n):
        ints.append(int(sys.stdin.readline()))
    ints.sort()
    ints.reverse()
    heapq.heapify(ints)
    ints.sort()
    ints.reverse()
    heapq.heapify(ints)
    ints.sort()
    return n, ints

def read_ints_heap_sorted_reverse_heap