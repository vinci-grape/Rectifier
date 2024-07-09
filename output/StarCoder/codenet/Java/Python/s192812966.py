import sys

w,h,n = map(int,raw_input().split())
x = map(int,raw_input().split())
y = map(int,raw_input().split())
a = map(int,raw_input().split())

xmax = max(x)
xmin = min(x)
ymax = max(y)
ymin = min(y)

w = max(xmax-xmin,0)
h = max(ymax-ymin,0)

print w*h