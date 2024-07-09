import re
import sys

n = int(sys.stdin.readline())
num = [i for i in range(1, n + 1)]
count = int(sys.stdin.readline())
line = [0, 0]
pt = re.compile(r'(\d+),(\d+)')
for i in range(count):
    next = sys.stdin.readline()
    for j in range(len(line)):
        match = pt.match(next)
        line[j] = int(match.group(j + 1)) - 1
    change = num[line[0]]
    num[line[0]] = num[line[1]]
    num[line[1]] = change
for i in range(n):
    print(num[i])