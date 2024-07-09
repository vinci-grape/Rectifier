str=input()
sum=0
for i in str:
    sum+=int(i)
if sum%9==0:
    print("Yes")
else:
    print("No")