import sys

def main():
    num = int(input())
    arr = []
    for i in range(num):
        arr.append(input())
    fine = 0
    for i in range(num):
        for j in range(num):
            if arr[i][j] == 'C':
                counter += 1
        fine += (counter * (counter - 1)) // 2
        counter = 0
    for i in range(num):
        for j in range(num):
            if arr[j][i] == 'C':
                counter += 1
        fine += (counter * (counter - 1)) // 2
        counter = 0
    print(fine)

if __name__ == '__main__':
    main()