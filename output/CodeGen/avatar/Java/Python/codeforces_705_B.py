def main():
    t = int(input())
    arr = [int(i) for i in input().split()]
    prevWinner = 0
    for i in range(len(arr)):
        if arr[i] == 1:
            if prevWinner == 0:
                prevWinner = 2
            else:
                if ((arr[i] - 1) % 2 == 0):
                    print(2)
                    prevWinner = 2
                else:
                    print(1)
                    prevWinner = 1
        else:
            if prevWinner == 2 or prevWinner == 0:
                if ((arr[i] - 1) % 2 == 0):
                    print(1)
                    prevWinner = 1
                else:
                    print(2)
                    prevWinner = 2
            else:
                if ((arr[i] - 1) % 2 == 0):
                    print(1)
                    prevWinner = 1
                else:
                    print(2)
                    prevWinner = 2

if __name__ == '__main__':
    main()