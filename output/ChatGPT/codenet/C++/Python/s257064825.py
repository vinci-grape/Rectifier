str = input()
sum = 0
for x in str:
    sum += int(x)
if sum % 9 == 0:
    print("Yes")
else:
    print("No")