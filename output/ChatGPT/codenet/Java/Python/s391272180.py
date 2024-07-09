s = input()
t = input()
flag = False

for i in range(len(s)):
    s = s[1:] + s[0]
    if t == s:
        flag = True
        break

if flag:
    print("Yes")
else:
    print("No")