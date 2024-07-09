n,t = map(int,raw_input().split())
A = map(int,raw_input().split())

minA = min(A)
num = 0
f = 0

for i in A:
    if i == minA:
        num += 1
    else:
        if f == i - minA:
            num += 1
        else:
            if f < i - minA:
                num = 1
                f = i - minA

print num