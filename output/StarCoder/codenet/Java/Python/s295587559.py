import re

def main():
    num = [i for i in range(1, int(input()) + 1)]
    count = int(input())
    for i in range(count):
        line = re.findall(r'\d+', input())
        num[line[0] - 1], num[line[1] - 1] = num[line[1] - 1], num[line[0] - 1]
    for i in num:
        print(i)

if __name__ == '__main__':
    main()