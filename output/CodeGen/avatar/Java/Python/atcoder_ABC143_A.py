def main(args):
    try:
        bf = open(args[0])
        x = bf.readline().strip().split(" ")
        a = int(x[0])
        b = int(x[1])
        c = a - b * 2
        if c < 0: c = 0
        print(c)
    except Exception as e:
        print(e)

if __name__ == "__main__":
    main(sys.argv[1:])