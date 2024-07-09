#####################################################
#                                                   #
#  For her who keeps the fire kindling in me...  #
#                                                   #
#####################################################

import sys

def main():
    n, m = map(int, sys.stdin.readline().strip().split())

    penal = [0] * (n+1)
    solved = [False] * (n+1)

    for _ in range(m):
        num, str = sys.stdin.readline().strip().split()
        num = int(num)
        if str == 'A':
            solved[num] = True
        elif not solved[num]:
            penal[num] += 1

    correct_ans = 0
    num_penal = 0
    for i in range(1, n+1):
        if solved[i]:
            correct_ans += 1
            num_penal += penal[i]

    print(correct_ans, num_penal)

if __name__ == "__main__":
    main()