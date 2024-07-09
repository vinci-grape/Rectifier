T, S, q = map(int, input().split())
previous = S
answer = 0

while previous < T:
    answer += 1
    previous *= q

print(answer)