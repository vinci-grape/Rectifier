def main():
    while True:
        number = int(input())
        if number == 0:
            break
        score = [int(x) for x in input().split()]
        score.sort()
        sum = 0
        for i in range(1, number-1):
            sum += score[i]
        print(sum/(number-2))

if __name__ == '__main__':
    main()