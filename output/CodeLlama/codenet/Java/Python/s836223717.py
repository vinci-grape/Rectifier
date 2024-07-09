import sys

n = int(sys.stdin.readline())
ryuka = [0] * (n + 1)
ryuka[0] = 2
ryuka[1] = 1
for i in range(2, n + 1):
    ryuka[i] = ryuka[i - 1] + ryuka[i - 2]
print(ryuka[n])