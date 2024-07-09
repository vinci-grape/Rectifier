def main():
    n = int(input())
    if n == 1:
        print('Hello World')
    else:
        strs = input().split()
        print(int(strs[0]) + int(strs[1]))

if __name__ == '__main__':
    main()