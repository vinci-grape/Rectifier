import sys

while True:
    try:
        number = int(raw_input())
        if number == 0:
            break
        score = [int(raw_input()) for i in range(number)]
        score.sort()
        sum = 0
        for i in range(1, number-1):
            sum += score[i]
        print sum/(number-2)
    except EOFError:
        break