import sys

def isEvenString(s):
    a = s[:len(s)/2]
    b = s[len(s)/2:]
    if a == b:
        return True
    else:
        return False

S = sys.stdin.readline().rstrip()

if len(S) % 2 == 1:
    S = S[:-1]
else:
    S = S[:-2]

while len(S) > 0:
    if isEvenString(S):
        break
    S = S[:-2]

print len(S)