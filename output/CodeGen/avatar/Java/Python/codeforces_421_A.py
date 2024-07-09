def main(args):
    n = int(input())
    a = int(input())
    b = int(input())
    list1 = []
    list2 = []
    for i in range(a):
        list1.append(int(input()))
    for i in range(b):
        list2.append(int(input()))
    for i in range(n):
        if list1.count(i+1) == 1:
            print(1 + " ")
        else:
            print(2 + " ")

if __name__ == "__main__":
    main(sys.argv)