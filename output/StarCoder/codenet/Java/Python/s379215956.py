import sys

s = sys.stdin.readline().strip()

if s[0] == s[1] and s[1] == s[2] and s[2] == s[3]:
    print("Bad")
else:
    print("Good")