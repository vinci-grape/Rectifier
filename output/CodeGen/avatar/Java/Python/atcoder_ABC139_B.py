def main(args):
    sc = Scanner(System.in)
    A = int(sc.next())
    B = int(sc.next())
    amari = 0
    result = 0
    result = (B - 1) // (A - 1)
    amari = (B - 1) % (A - 1)
    if amari!= 0:
        result += 1
    out = sys.stdout
    out.write(str(result))
    sc.close()
    out.flush()