def main(args):
    in = sys.stdin.readline()
    n = in.strip().replace('.', '')
    s = False
    for i in range(len(n)):
        if n[i] == '.':
            if s:
                print(1)
                s = False
            else:
                print(0)
        else:
            if s:
                print(2)
                s = False
            else:
                s = True
    in.close()