def main():
    count = int(input())
    givingNumbers = [int(input()) for _ in range(count)]
    for i in range(count-1, -1, -1):
        print(givingNumbers[i])
        if i > 0:
            print(" ")
    print()

if __name__ == "__main__":
    main()