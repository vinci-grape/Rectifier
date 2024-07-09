def main():
    n,d = map(int,raw_input().split())
    a = d*2+1
    print int(ceil(n/a))

main()