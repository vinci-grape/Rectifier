import sys

N = int(raw_input().strip())

count1 = 0
count2 = 0

for i in range(N):
    a = int(raw_input().strip())
    if a % 4 == 0:
        count1 += 1
    elif a % 2 == 0 and (a / 2) % 2 == 1:
        count2 += 1

if count1 >= N / 2:
    print "Yes"
elif ((N / 2 - count1) * 2 + N % 2) == count2:
    print "Yes"
else:
    print "No"