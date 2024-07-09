def A():
    pass

def B():
    x = int(input())
    sum = 100
    i = 0
    while sum < x:
        sum += sum / 100
        i += 1
    print(i)

def C():
    pass

def D():
    pass

def main():
    B()

if __name__ == '__main__':
    main()