N = input()
S = 0
for i in N:
    S += int(i)
if int(N)%S == 0:
    print("Yes")
else:
    print("No")