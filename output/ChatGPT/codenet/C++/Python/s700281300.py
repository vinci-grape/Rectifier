n = int(input())

for _ in range(n):
    s = input()

    st = set()
    st.add(s)

    for j in range(1, len(s)):
        res = s[:j]
        res2 = s[j:]

        t = res
        t2 = res2

        st.add(t + t2)
        st.add(t2 + t)

        st.add(t + res2)
        st.add(res2 + t)

        st.add(res + t2)
        st.add(t2 + res)

        st.add(res + res2)
        st.add(res2 + res)

    print(len(st))