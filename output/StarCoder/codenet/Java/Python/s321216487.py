import sys

S = raw_input()

for i in range(len(S)):
    for j in range(len(S)):
        if S[:i]+S[j:] == "keyence":
            print "YES"
            sys.exit()
print "NO"