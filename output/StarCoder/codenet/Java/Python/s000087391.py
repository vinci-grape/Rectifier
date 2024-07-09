import sys

def main():
    while True:
        n = int(raw_input())
        if n == 0:
            break
        result = []
        for i in range(n):
            line = raw_input()
            array = line.split()
            input = [int(x) for x in array]
            sum = 0
            for x in input:
                sum += x
            avg = sum/n
            num = 0
            for x in input:
                if x <= avg:
                    num += 1
            result.append(num)
        for x in result:
            print x

if __name__ == "__main__":
    main()