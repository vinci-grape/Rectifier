def main():
    sc = Scanner(System.in)
    n = int(sc.nextLine())
    sqrt = math.sqrt(n)
    nearNum = int(math.floor(sqrt))
    ans = int(math.pow(nearNum, 2))
    print(ans)
    sc.close()

if __name__ == '__main__':
    main()