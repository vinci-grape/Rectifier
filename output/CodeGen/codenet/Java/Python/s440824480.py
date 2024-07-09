def main():
    sc = Scanner(sys.stdin)
    n = sc.nextInt()
    c=0
    flg=0
    while n>0:
        x = sc.nextInt()
        y = sc.nextInt()
        
        if x==y:
            c+=1
            if c>=3:
                flg=1
        else:
            c=0
        n-=1
    if flg==0:
        print("No")
    else:
        print("Yes")

if __name__ == "__main__":
    main()