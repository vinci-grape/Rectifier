A,B,K = map(int,input().split())
if A+K-1>=B-K+1:
    while A<=B:
        System.out.println(A);
        A+=1
else:
    i=0
    while i<=K-1:
        System.out.println(A+i);
        i+=1
    while B-K+1<=B:
        System.out.println(B-K+1);
        K-=1