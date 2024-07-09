import sys

def main():
    a, tA = map(int, sys.stdin.readline().split())
    b, tB = map(int, sys.stdin.readline().split())
    timing = sys.stdin.readline().strip()
    hrs = int(timing[:2])
    mins = int(timing[3:])
    simDeparture = hrs * 60 + mins
    simArrival = simDeparture + tA
    counter = 0
    for i in range(300, 1440, b):
        busDeparture = i
        busArrival = i + tB
        if busDeparture >= simArrival or simDeparture >= busArrival:
            continue
        counter += 1
    print(counter)

if __name__ == "__main__":
    main()