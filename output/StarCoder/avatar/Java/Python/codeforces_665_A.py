import sys

for line in sys.stdin:
    a, tA, b, tB, timing = line.split()
    hrs, mins = timing.split(':')
    simDeparture = int(hrs) * 60 + int(mins)
    simArrival = simDeparture + int(tA)
    counter = 0
    for i in range(300, 1440, int(b)):
        busDeparture = i
        busArrival = i + int(tB)
        if busDeparture >= simArrival or simDeparture >= busArrival:
            continue
        counter += 1
    print(counter)