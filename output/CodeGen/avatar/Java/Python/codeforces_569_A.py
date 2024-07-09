def main(args):
    in = input()
    T = in.next()
    S = in.next()
    q = in.next()
    previous = S
    answer = 0
    while previous < T:
        answer += 1
        previous *= q
    print(answer)