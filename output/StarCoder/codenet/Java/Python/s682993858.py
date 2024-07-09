import sys

while True:
    try:
        s = input()
        if s == '0':
            break
        sum = 0
        for i in s:
            sum += int(i)
        print(sum)
    except EOFError:
        break