import sys
input = sys.stdin.readline

n = int(input())
a = []
if n == 1:
    print(int(input()))
    sys.exit()
for i in range(n):
    a.append(int(input()))
a.sort()
if a[-1] == 0:
    print(0)
    sys.exit()
ans = 0
while True:
    if len(a) == 1:
        ans = a[0]
        break
    a = func(a)
print(ans)

def func(A):
    a = A
    min = 0
    for i in range(len(a)):
        if a[i] == 0:
            a.remove(i)
            i -= 1
        else:
            if min!= 0:
                a[i] = a[i] % min
                if a[i] == 1:
                    print(1)
                    sys.exit()
            else:
                min = a[i]
    a.sort()
    return a