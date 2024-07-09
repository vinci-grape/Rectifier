def main(args):
    scan = Scanner(System.in)
    x = int(scan.next())
    bool = x == 1
    result = not bool
    print(result)
    out = sys.stdout
    out.flush()