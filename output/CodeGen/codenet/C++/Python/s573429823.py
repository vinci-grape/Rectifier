def main():
    # Your code here!
    n = int(input())
    flg = False
    if n < 4:
        print("No")
    else:
        for i in range(0, (n / 4) + 1):
            for j in range(0, (n / 7) + 1):
                if (i * 4 + j * 7) == n:
                    flg = True
                    break
            if flg:
                break
        if flg:
            print("Yes")
        else:
            print("No")

if __name__ == "__main__":
    main()