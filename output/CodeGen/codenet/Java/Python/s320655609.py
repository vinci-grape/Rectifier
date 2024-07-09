import sys
import io
import itertools

def read_input():
    input_str = sys.stdin.readline()
    input_str = input_str.strip()
    input_str = input_str.replace(' ', '')
    input_str = input_str.replace('\n', '')
    return input_str

def read_constraints():
    constraints = []
    for i in range(5):
        constraints.append(int(sys.stdin.readline()))
    return constraints

def calc():
    N = int(read_input())
    constraints = read_constraints()
    min = sys.maxsize
    for c in constraints:
        min = min if min > c else c
    time = N / min
    if N % min!= 0:
        time += 1
    time += 4
    result = time
    print(result)

if __name__ == '__main__':
    calc()