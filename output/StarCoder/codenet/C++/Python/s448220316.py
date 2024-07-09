n=int(input())
    m=int(input())
    fa=[i for i in range(n+1)]
    v=[0 for i in range(n+1)]
    for i in range(m):
        l,r,vi=map(int,input().split())
        li=get(l)
        ri=get(r)
        if li!=ri:
            v[ri]=vi-v[r]+v[l]
            fa[ri]=li
        else:
            if v[r]-v[l]!=vi:
                print("No")
                return 0
    print("Yes")