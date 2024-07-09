import sys
input = sys.stdin.readline

x = int(input())
count = 0
tmp = x
x = 0
while x!= 360:
    x = x + tmp
    if x > 360:
        x = x - 360
    count += 1
print(count)