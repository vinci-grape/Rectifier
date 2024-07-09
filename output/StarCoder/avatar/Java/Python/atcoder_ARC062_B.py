import sys
input = sys.stdin.readline

S = input().rstrip()
score = 0
for i in range(len(S)):
    my = 'g' if i % 2 == 0 else 'p'
    his = S[i]
    if my!= his:
        score += my == 'p' and 1 or -1
print(score)