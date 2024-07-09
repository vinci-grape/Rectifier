import math

VP = int(input())
VD = int(input())
T = int(input())
F = int(input())
C = int(input())

if VD <= VP:
    exit()

answer = 0
start = T

while True:
    x = start * VP / (VD - VP)
    if (start + x) * VP >= C:
        break
    start += 2 * x + F
    answer += 1