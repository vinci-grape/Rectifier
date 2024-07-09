import sys

def main():
    for line in sys.stdin:
        n = int(line.strip())
        if n == 0:
            break
        s = ".,!? :abc:def:ghi:jkl:mno:pqrs:tuv:wxyz".split(":")
        k = [s[i].strip().split("") for i in range(9)]
        for line in sys.stdin:
            c = line.strip().split("")
            l = -1
            a = 0
            for i in range(len(c)):
                if c[i]!= '0':
                    a = int(c[i]) - 1
                    l = (l + 1) % len(k[a])
                elif l >= 0:
                    print(k[a][l], end="")
                    l = -1
            print()

if __name__ == "__main__":
    main()