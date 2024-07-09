import sys
import itertools

def read_input():
    in_str = sys.stdin.readline()
    in_str = in_str.strip()
    in_str = in_str.replace(' ', '')
    in_str = in_str.replace('\n', '')
    return in_str


def solve(testNumber, in_str):
    if 'A' in in_str and 'B' in in_str:
        print('Yes')
    else:
        print('No')


if __name__ == '__main__':
    testNumber = int(read_input())
    for i in range(testNumber):
        in_str = read_input()
        solve(i + 1, in_str)