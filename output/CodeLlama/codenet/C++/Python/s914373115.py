import sys

def A():
    pass

def B():
    x = int(sys.stdin.readline())
    sum = 100
    i = 0
    while sum < x:
        sum += sum / 100
        i += 1
    print(i)

if __name__ == '__main__':
    B()