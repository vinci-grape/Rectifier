n = int(raw_input())

for i in range(n):
    s = raw_input()
    st = set()
    st.add(s)
    for j in range(1,len(s)):
        res = ''
        for k in range(j):
            res += s[k]
        t = res
        res = res[::-1]
        t2 = res
        res = res[::-1]
        st.add(t+t2)
        st.add(t2+t)
        st.add(t+res)
        st.add(res+t)
        st.add(res+res)
    print len(st)