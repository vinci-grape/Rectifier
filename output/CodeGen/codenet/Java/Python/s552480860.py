import sys

def main():
    sc = sys.stdin.readline()
    h1 = int(sc.next())
    m1 = int(sc.next())
    h2 = int(sc.next())
    m2 = int(sc.next())
    k = int(sc.next())
    t1 = h1 * 60 + m1
    t2 = h2 * 60 + m2
    print(t2-t1-k)


main()