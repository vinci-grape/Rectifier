import sys

N = int(raw_input().strip())
c = raw_input().strip()
for i in range(len(c)):
    c = chr((ord(c[i])-ord('A')+N)%26 + ord('A'))
print c