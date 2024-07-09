import sys

n = int(input())
str = []
for i in range(n):
    str.append(input())

mark = ["S", "H", "C", "D"]
for ma in mark:
    for i in range(1, 14):
        s = str(i)
        st = ma + " " + s
        if st in str:
            continue
        else:
            print(st)