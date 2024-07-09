a, b = map(int, input().split())
bstr = str(b)
num = a * 10 ** len(bstr) + b

for i in range(1, 100101):
    if i * i == num:
        break

if i > 100100:
    print("No")
else:
    print("Yes")