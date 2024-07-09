def main():
    n = int(raw_input())
    for i in range(n):
        s = raw_input()
        st = set()
        for j in range(1, len(s)):
            ss = ''
            for k in range(j):
                ss += s[k]
            ss = ss[::-1]
            st.add(ss)
            st.add(ss[::-1])
            st.add(ss + ss[::-1])
            st.add(ss[::-1] + ss)
            st.add(ss + ss[::-1] + ss)
            st.add(ss[::-1] + ss + ss[::-1])
            st.add(ss[::-1] + ss[::-1] + ss)
            st.add(ss[::-1] + ss[::-1] + ss[::-1])
        print len(st)

if __name__ == '__main__':
    main()