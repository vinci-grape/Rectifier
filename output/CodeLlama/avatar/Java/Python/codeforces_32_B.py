import sys

n = sys.stdin.readline().strip()
s = False
for i in range(len(n)):
    if n[i] == '.':
        if s:
            print(1, end='')
            s = False
        else:
            print(0, end='')
    else:
        if s:
            print(2, end='')
            s = False
        else:
            s = True