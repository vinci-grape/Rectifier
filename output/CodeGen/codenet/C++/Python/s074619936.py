def main():
    str = input("Enter a string: ")
    sum = 0
    for i in range(len(str)):
        tmp = str[i]
        num = int(tmp)
        sum += num
    print(sum)

if __name__ == "__main__":
    main()