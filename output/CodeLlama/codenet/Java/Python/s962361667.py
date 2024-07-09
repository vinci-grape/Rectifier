import sys
w,n = sys.stdin.readline().split()
w,n = int(w),int(n)
values = [i+1 for i in range(w)]
for i in range(n):
    a,b = sys.stdin.readline().split()
    a,b = int(a)-1,int(b)-1
    x = values[a]
    values[a] = values[b]
    values[b] = x
for i in range(w):
    print(values[i])