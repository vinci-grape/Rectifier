s = input()
t = input()

check = False

for i in range(len(s) - len(t), -1, -1):
    check2 = True
    for j in range(len(t)):
        if s[i + j] != '?' and s[i + j] != t[j]:
            check2 = False
    if check2:
        check = True
        for j in range(len(t)):
            s[i + j] = t[j]
    if check:
        break

if check:
    for i in range(len(s)):
        if s[i] == '?':
            print("a", end="")
        else:
            print(s[i], end="")
    print()
else:
    print("UNRESTORABLE")