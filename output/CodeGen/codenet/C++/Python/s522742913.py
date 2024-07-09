def main():
    source = input("Enter the source string: ")
    if len(source) > 10 or len(source) < 1:
        return -1
    max_i = pow(2, len(source) - 1)
    sum = 0
    for i in range(max_i):
        plus = bitset(i)
        number = 0
        working = source
        while plus.any():
            i = 0
            while not plus[i]:
                i += 1
            sum += float(working[:i + 1])
            plus >>= i + 1
            working = working[i + 1:]
    sum += float(working)
    print(sum)

if __name__ == '__main__':
    main()