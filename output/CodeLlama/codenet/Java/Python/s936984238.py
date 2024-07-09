import sys
import math

def read():
    global number
    number = int(sys.stdin.readline())
    if number == 0:
        return False
    global score
    score = []
    for i in range(number):
        score.append(int(sys.stdin.readline()))
    return True

def slove():
    score.sort()
    sum = 0
    for i in range(1, number-1):
        sum = sum + score[i]
    print(sum/(number-2))

while read():
    slove()