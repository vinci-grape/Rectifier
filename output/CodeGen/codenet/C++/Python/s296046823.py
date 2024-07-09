def main():
    N, K = map(int, raw_input().split())
    v = map(int, raw_input().split())
    count = ((N - 1) + ((K - 1) - 1)) / (K - 1)
    print count

if __name__ == '__main__':
    main()