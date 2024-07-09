import sys
from collections import deque


if __name__ == "__main__":
    stack = deque()
    for line in sys.stdin:
        if line.strip() == "0":
            print(stack.pop())
        else:
            stack.append(int(line))