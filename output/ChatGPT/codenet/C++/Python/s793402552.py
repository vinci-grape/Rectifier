a, b = map(int, input().split())
bstr = str(b)
num = a * 10 ** len(bstr) + b

i = 1
while i <= 100100:
    if i * i == num:
        break
    i += 1

if i > 100100:
    print("No")
else:
    print("Yes")