def main(args):
    in = open(args[0], 'r')
    str = in.readline().split(' ')
    st = list(map(int, in.readline().split(' ')))
    a = st[0]
    b = st[1]
    u = in.readline()
    if u == str[0]:
        return str[0] +'' + str[1]
    else:
        return str[0] +'' + str[1]

print main(sys.argv[1:])