def main():
    N,L = map(int,raw_input().split())
    v = map(str,raw_input().split())
    v.sort()
    for i in range(N):
        print v[i]
    print

if __name__ == '__main__':
    main()