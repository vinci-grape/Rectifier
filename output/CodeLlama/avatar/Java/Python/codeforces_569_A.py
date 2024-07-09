import sys

T = int(sys.stdin.readline())
S = int(sys.stdin.readline())
q = int(sys.stdin.readline())
previous = S
answer = 0
while previous < T:
    answer += 1
    previous *= q
print(answer)