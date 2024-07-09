info = [[[0 for _ in range(10)] for _ in range(3)] for _ in range(4)]

n = int(input())
for _ in range(n):
    built, floor, room, num = map(int, input().split())
    info[built - 1][floor - 1][room - 1] += num

for i in range(4):
    for j in range(3):
        for k in range(10):
            print(" " + str(info[i][j][k]), end="")
        print()
    if i != 3:
        print("####################")