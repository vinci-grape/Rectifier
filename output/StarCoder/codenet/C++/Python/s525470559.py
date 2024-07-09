import sys

def main():
    n, q = map(int, raw_input().split())
    Q = []
    elaps = 0

    for i in range(n):
        name, time = raw_input().split()
        Q.append((name, int(time)))

    while Q:
        name, time = Q.pop(0)
        if time <= q:
            elaps += time
            print name, elaps
        else:
            Q.append((name, time - q))
            elaps += q

if __name__ == "__main__":
    main()