import sys

N = int(sys.stdin.readline())

map = {}

for i in range(N):

    map[i] = sys.stdin.readline().rstrip()

ans = True

past = {}

next = ""

for i in range(N):

    if past.values().__contains__(map[i]):

        ans = False

        break

    past[i] = map[i]

    if i != 0:

        if not next == map[i][0]:

            ans = False

            break

    next = map[i][-1]

if ans:

    print("Yes")

else:

    print("No")