def solve():
    a, b = map(int, raw_input().split())
    if a == 1 or b == 1:
        if a == 1 and b == 1:
            print "Draw"
        elif a == 1:
            print "Alice"
        else:
            print "Bob"
    else:
        if a == b:
            print "Draw"
        elif a > b:
            print "Alice"
        else:
            print "Bob"

if __name__ == "__main__":
    solve()