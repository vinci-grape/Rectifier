import sys

str = sys.stdin.readline().rstrip()
k = int(sys.stdin.readline().rstrip())
n = len(str)
for i in range(k):
    if str[i] == '1':
        if i == k - 1:
            print(1)
            exit()
    else:
        print(str[i])
        exit()