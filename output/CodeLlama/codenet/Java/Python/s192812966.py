import sys

w,h,n = map(int,sys.stdin.readline().split())
x = []
y = []
a = []
xmax = w
xmin = 0
ymax = h
ymin = 0
for i in range(n):
    x.append(int(sys.stdin.readline()))
    y.append(int(sys.stdin.readline()))
    a.append(int(sys.stdin.readline()))
    if a[i] == 1:
        xmin = max(xmin, x[i])
    elif a[i] == 2:
        xmax = min(xmax, x[i])
    elif a[i] == 3:
        ymin = max(ymin, y[i])
    elif a[i] == 4:
        ymax = min(ymax, y[i])
w = max(xmax-xmin, 0)
h = max(ymax-ymin, 0)

print(w*h)