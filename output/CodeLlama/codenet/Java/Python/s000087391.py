import sys

def main():
    result = []
    for line in sys.stdin:
        n = int(line)
        if n == 0:
            break
        line = sys.stdin.readline()
        input = list(map(int, line.split()))
        sum = 0
        for i in range(n):
            sum += input[i]
        avg = sum / n
        num = 0
        for i in range(n):
            if input[i] <= avg:
                num += 1
        result.append(num)
    for i in range(len(result)):
        if result[i] == -1:
            print("NONE")
        else:
            print(result[i])

if __name__ == "__main__":
    main()