def main():
    w = int(input())
    a = int(input())
    b = int(input())
    
    answer = max(a,b)-min(a,b) -w
    if answer < 0:
        print(0)
    else:
        print(answer)

if __name__ == "__main__":
    main()