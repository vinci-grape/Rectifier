import sys

n = int(sys.stdin.readline())
a = [0] * (n + 1)
b = [0] * (n + 1)
num = [0] * (n + 1)
for i in range(1, n + 1):
    a[i] = int(sys.stdin.readline())
for i in range(1, n + 1):
    b[i] = int(sys.stdin.readline())
for i in range(1, n + 1):
    num[b[i]] += 1
ss = ""
ans = 0
st = [False] * (n + 1)
for i in range(1, n + 1):
    if a[i] == 1:
        st[i] = True
        sb = ""
        x = b[i]
        sss = str(i)
        sb += " " + sss[::-1]
        s = 1
        while not st[x] and num[x] == 1 and x != 0 and a[x] != 1:
            sss = str(x)
            sb += " " + sss[::-1]
            st[x] = True
            x = b[x]
            s += 1
        if s > ans:
            ans = s
            ss = sb[::-1]
print(ans)
print(ss)