import sys
sc = sys.stdin.read().split()
n = int(sc[0])
d=0
for i in range(n):
    d+=int(sc[i+1])%2
print(d%2==0)