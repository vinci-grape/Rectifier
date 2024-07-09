import sys

S = sys.stdin.readline().strip()
T = sys.stdin.readline().strip()

min = 1000000000
for i in range(len(S)-len(T)+1):
    min = min if min < find(S[i:i+len(T)], T) else find(S[i:i+len(T)], T)

if min!= 1000000000:
    print(min)
else:
    print(len(T))

def find(a, b):
    calc = 0
    for x in range(len(a)):
        if a[x]!= b[x]:
            calc += 1
    return calc