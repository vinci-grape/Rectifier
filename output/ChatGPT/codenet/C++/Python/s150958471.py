train = [0, 0]
bus = [0, 0]

train[0], train[1] = map(int, input().split())
bus[0], bus[1] = map(int, input().split())

print(min(train[0], train[1]) + min(bus[0], bus[1]))