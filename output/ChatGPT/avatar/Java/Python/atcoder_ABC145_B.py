import sys

def cout(str):
    sys.stdout.write(str + '\n')

n = int(input())
str = input()

a = ""
for i in range(n//2):
    a += str[i]

if str == a + a:
    cout("Yes")
else:
    cout("No")