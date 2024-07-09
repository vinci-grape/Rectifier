import sys

for i in range(5):
    if int(sys.stdin.readline()) == 0:
        print(i+1)
        break