import sys

N = int(sys.stdin.readline())
c = sys.stdin.readline()
for i in range(len(c)):
    c = c[:i] + chr((ord(c[i])-ord('A')+N) % 26 + ord('A')) + c[i+1:]
print(c)