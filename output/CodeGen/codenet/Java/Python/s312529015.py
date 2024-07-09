def main():
    A = int(input())
    B = int(input())
    if A%3==0 or B%3==0 or (A+B)%3==0:
        print("Possible")
    else:
        print("Impossible")

if __name__ == '__main__':
    main()