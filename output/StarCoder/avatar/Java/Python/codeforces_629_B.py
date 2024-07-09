import sys

n = int(input())

FfriendPerDay = [0] * 367
MfriendPerDay = [0] * 367
answer = 0

for i in range(n):
    c = input()
    a = int(input())
    b = int(input())
    for j in range(a, b + 1):
        if c == 'M':
            MfriendPerDay[j] += 1
        else:
            FfriendPerDay[j] += 1
        if MfriendPerDay[j] < FfriendPerDay[j]:
            if MfriendPerDay[j] > answer:
                answer = MfriendPerDay[j]
        else:
            if FfriendPerDay[j] > answer:
                answer = FfriendPerDay[j]

print(answer * 2)