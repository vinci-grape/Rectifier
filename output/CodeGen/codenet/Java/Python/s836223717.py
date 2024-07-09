def main():
    n = int(input())
    ryuka = [2, 1]
    for i in range(2, n + 1):
        ryuka.append(ryuka[i - 1] + ryuka[i - 2])
    print(ryuka[n])

if __name__ == '__main__':
    main()