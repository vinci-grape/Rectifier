import sys

info = [[[0 for x in range(10)] for y in range(3)] for z in range(4)]

n = int(sys.stdin.readline())
for i in range(n):
    built = int(sys.stdin.readline())
    floor = int(sys.stdin.readline())
    room = int(sys.stdin.readline())
    num = int(sys.stdin.readline())
    info[built - 1][floor - 1][room - 1] += num

for i in range(4):
    for j in range(3):
        for k in range(10):
            print(" " + str(info[i][j][k]), end="")
        print("")
    if i!= 4 - 1:
        print("####################")