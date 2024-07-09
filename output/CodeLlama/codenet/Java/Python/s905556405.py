import sys

numlist = []
k = 0

for i in range(5):
    numlist.append(int(sys.stdin.readline()))
k = int(sys.stdin.readline())

if (numlist[4] - numlist[0]) > k:
    print(":(")
else:
    print("Yay!")