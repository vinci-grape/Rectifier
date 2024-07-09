while True:
    a = int(input())
    op = input()
    b = int(input())
    if op == '?':
        break
    if op == '+':
        print(a + b)
    if op == '-':
        print(a - b)
    if op == '*':
        print(a * b)
    if op == '/':
        print(a / b)

"""

import sys

def main():
    a = int(sys.stdin.readline())
    op = sys.stdin.readline().strip()
    b = int(sys.stdin.readline())
    if op == '?':
        print('?')
    if op == '+':
        print(a + b)
    if op == '-':
        print(a - b)
    if op == '*':
        print(a * b)
    if op == '/':
        print(a / b)

if __name__ == '__main__':
    main()