def main():
    n,k,L,s = map(int, raw_input().split())
    ans,ans2 = 0,0
    for i in xrange(1,n):
        if L == s[i]:
            ans += 1
            ans2 += 1
        else:
            L = s[i]
            ans += ans + 1
            ans2 += 1
    ans += ans + 1
    ans2 += 1
    print ans + min(2*k,ans2-1)