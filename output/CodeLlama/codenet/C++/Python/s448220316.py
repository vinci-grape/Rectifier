#coding:utf-8
    n,m=map(int,raw_input().split())
    fa=[i for i in range(1,n+1)]
    v=[0 for i in range(n+1)]
    def get(x):
        if x==fa[x]:return x
        f=get(fa[x])
        v[x]+=v[fa[x]]
        return fa[x]=f
    for i in range(1,m+1):
        l,r,vi=map(int,raw_input().split())
        li=get(l)
        ri=get(r)
        if li!=ri:
            v[ri]=vi-v[r]+v[l]
            fa[ri]=li
        else:
            if v[r]-v[l]!=vi:
                print "No"
                exit(0)
    print "Yes"