def main():
    sc = Scanner(sys.stdin)
    A1 = sc.nextInt()
    A2 = sc.nextInt()
    A3 = sc.nextInt()
    if (A1 + A2 + A3 >= 22):
        print "bust"
    else:
        print "win"

if __name__ == "__main__":
    main()