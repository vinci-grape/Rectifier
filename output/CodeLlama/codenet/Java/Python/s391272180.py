import sys
s=sys.stdin.readline().strip()
t=sys.stdin.readline().strip()
flag=False
for i in range(len(s)):
    s=s[1:]+s[0]
    if s==t:
        flag=True
        break
if flag==True:
    print("Yes")
else:
    print("No")