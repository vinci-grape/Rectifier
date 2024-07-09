import sys

def main():
    a = int(sys.stdin.readline())
    b = int(sys.stdin.readline())
    ju = [False for i in range(100001)]
    pe = [0 for i in range(100001)]
    wa = 0
    ac = 0

    for i in range(b):
        n = int(sys.stdin.readline())
        res = sys.stdin.readline().strip()

        if res == "WA" and ju[n-1]!= True:
            pe[n-1] += 1

        if res == "AC":
            ju[n-1] = True

    for i in range(a):
        if ju[i]:
            ac += 1
            wa += pe[i]

    print(ac, wa)

if __name__ == "__main__":
    main()