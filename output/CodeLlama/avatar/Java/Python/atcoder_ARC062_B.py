import sys

def main():
    input = sys.stdin.readline
    S = input().strip()
    score = 0
    for i in range(len(S)):
        my = i % 2 == 0 and 'g' or 'p'
        his = S[i]
        if my != his:
            score += my == 'p' and 1 or -1
    print(score)

if __name__ == '__main__':
    main()