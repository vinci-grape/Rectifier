def main():
    str = input()
    max = 0
    cnt = 0
    for sc in str:
        if sc == 'A' or sc == 'C' or sc == 'G' or sc == 'T':
            cnt += 1
        else:
            cnt = 0
        max = max < cnt? cnt : max
    print(max)

if __name__ == '__main__':
    main()