def main():
    W,H,x,y,r = map(int,input().split())
    if x-r<0 or x+r>W or y-r<0 or y+r>H:
        print("No")
    else:
        if x-r>=0 and x+r<=W and y-r>=0 and y+r<=H:
            print("Yes")

if __name__ == '__main__':
    main()