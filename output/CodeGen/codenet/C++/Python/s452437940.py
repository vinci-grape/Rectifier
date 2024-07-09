def main():
    a,b,x=map(int,raw_input().split())
    s=(b/x-a/x)
    if a%x==0:
        s+=1
    print s

main()