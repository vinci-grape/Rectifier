import sys

def rec(x):
    answer = 0
    for k in range(31, -1, -1):
        if (x & (1 << k)) != 0:
            answer += 1
    return answer

n = int(input())
a = [0] * 33
for i in range(n):
    a[rec(int(input()))] += 1

answer = 0
for i in range(len(a)):
    summ = (1 + a[i] - 1) / 2.0 * (a[i] - 1)
    answer += summ

print(int(answer))