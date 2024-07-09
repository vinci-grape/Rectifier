info = [[[0] * 10 for i in range(3)] for j in range(4)]
n = int(input())
for i in range(n):
    built, floor, room, num = input().split()
    built, floor, room, num = int(built), int(floor), int(room), int(num)
    info[built - 1][floor - 1][room - 1] += num
for i in range(4):
    for j in range(3):
        for k in range(10):
            print(" " + str(info[i][j][k]), end = '')
        print()
    if i != 4 - 1: print("####################")