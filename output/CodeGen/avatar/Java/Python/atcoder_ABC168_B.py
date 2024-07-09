def main(args):
    in = raw_input()
    K = int(in.next())
    S = in.next()
    if len(S) <= K:
        print S
    else:
        print S[0:K] + "..."