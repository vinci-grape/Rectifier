import sys

n = int(raw_input().strip())
str = []
for i in xrange(n):
    str.append(raw_input().strip())

mark = ["S","H","C","D"]
for ma in mark:
    for i in xrange(1,14):
        s = str(i)
        st = ma + " " + s
        if st in str:
            continue
        else:
            print st