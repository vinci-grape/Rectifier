train = [int(x) for x in input().split()]
bus = [int(x) for x in input().split()]

print(min(train[0], train[1]) + min(bus[0], bus[1]))