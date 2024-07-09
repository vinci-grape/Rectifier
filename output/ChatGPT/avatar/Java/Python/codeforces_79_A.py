def canTake(xNeeded, xAvailable, yNeeded, yAvailable):
    if xNeeded > xAvailable:
        return False
    if yNeeded > yAvailable:
        return False
    return True

x, y = map(int, input().split())
turn = 0

while True:
    if turn % 2 == 0:
        if canTake(2, x, 2, y):
            x -= 2
            y -= 2
        elif canTake(1, x, 12, y):
            x -= 1
            y -= 12
        elif canTake(0, x, 22, y):
            y -= 22
        else:
            print("Hanako")
            break
    else:
        if canTake(0, x, 22, y):
            y -= 22
        elif canTake(1, x, 12, y):
            x -= 1
            y -= 12
        elif canTake(2, x, 2, y):
            x -= 2
            y -= 2
        else:
            print("Ciel")
            break

    turn += 1