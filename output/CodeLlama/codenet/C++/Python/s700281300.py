#!/usr/bin/env python3

import sys

def main():
    n = int(sys.stdin.readline())

    for i in range(n):
        s = sys.stdin.readline().strip()

        st = set()
        st.add(s)

        for j in range(1, len(s)):
            res = s[:j]
            res2 = s[j:]

            t = res
            res = res[::-1]
            t2 = res2
            res2 = res2[::-1]

            st.add(t + t2)
            st.add(t2 + t)

            st.add(t + res2)
            st.add(res2 + t)

            st.add(res + t2)
            st.add(t2 + res)

            st.add(res + res2)
            st.add(res2 + res)

        print(len(st))

if __name__ == '__main__':
    main()