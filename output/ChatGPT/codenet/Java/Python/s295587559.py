import re

num = [i + 1 for i in range(int(input()))]
count = int(input())
pt = re.compile(r'(\d+),(\d+)')
line = [0, 0]

for i in range(count):
    next_input = input()
    match = pt.match(next_input)
    line[0] = int(match.group(1)) - 1
    line[1] = int(match.group(2)) - 1
    change = num[line[0]]
    num[line[0]] = num[line[1]]
    num[line[1]] = change

for i in num:
    print(i)