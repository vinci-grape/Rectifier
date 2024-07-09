def main():
    n = int(input())
    if n % 10 == 9 or n / 10 == 9:
        print("Yes")
    else:
        print("No")

if __name__ == "__main__":
    main()