n = int(input())
a = []
b = []
temp = 0
q = 0
w = 0
e = 0
f = False

for i in range(n):
    a.append(int(input()))
    b.append(int(input()))

    if temp < a[i]:
        if q > b[i]:
            f = True
        q = b[i]
        temp = a[i]
    
    if temp > a[i]:
        if q < b[i]:
            f = True
        q = b[i]
        temp = a[i]
    
    if a[i] > w:
        w = a[i]
        if b[i] < e:
            f = True
        e = b[i]
    
    if a[i] < w:
        if b[i] > e:
            f = True

if f:
    print("Happy Alex")
else:
    print("Poor Alex")