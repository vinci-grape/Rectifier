def main():
    count = int(input())
    
    total = 0
    for ix in range(1, count + 1):
        total += ix
    
    print(total)

if __name__ == '__main__':
    main()