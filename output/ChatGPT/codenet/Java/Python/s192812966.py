w, h, n = map(int, input().split())
x = [0] * n
y = [0] * n
a = [0] * n
xmax = w
xmin = 0
ymax = h
ymin = 0

for i in range(n):
    x[i], y[i], a[i] = map(int, input().split())
    
    if a[i] == 1:
        xmin = max(xmin, x[i])
    elif a[i] == 2:
        xmax = min(xmax, x[i])
    elif a[i] == 3:
        ymin = max(ymin, y[i])
    elif a[i] == 4:
        ymax = min(ymax, y[i])

w = max(xmax - xmin, 0)
h = max(ymax - ymin, 0)

print(w * h)