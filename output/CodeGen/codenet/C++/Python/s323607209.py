def main():
    n,k = map(int,raw_input().split())
    if k%2==0:
        for i in xrange(1,n+1):
            if i%k==k/2:
                l+=1
            else:
                r+=1
        print l*l*l+r*r*r
    else:
        for i in xrange(1,n+1):
            if i%k==0:
                r+=1
        print r*r*r

if __name__ == '__main__':
    main()