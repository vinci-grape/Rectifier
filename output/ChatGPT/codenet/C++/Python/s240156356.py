str1, str2 = input().split()

str1 = sorted(str1)
str2 = sorted(str2, reverse=True)

loop = min(len(str1), len(str2))
flag = False

for i in range(loop):
    ch1 = str1[i]
    ch2 = str2[i]

    if ch1 == ch2:
        if loop == i + 1 and len(str1) < len(str2):
            flag = True
            break
        else:
            continue
    else:
        if ch2 > ch1:
            flag = True
            break
        else:
            break

if flag:
    print("Yes")
else:
    print("No")