def main():
    br = BufferedReader(InputStreamReader(System.in))
    pw = PrintWriter(OutputStreamWriter(System.out))
    Fast = class Fast:
        def sol(self, br, pw):
            st = StringTokenizer(br.readLine())
            s = st.nextToken()
            cum = [0] * (s.length() + 1)
            cum[0] = cum[s.length()] = 0
            for i in range(1, s.length()):
                if s[i] == s[i-1]:
                    cum[i] = cum[i-1] + 1
                else:
                    cum[i] = cum[i-1]
            st = StringTokenizer(br.readLine())
            q = int(st.nextToken())
            while q > 0:
                st = StringTokenizer(br.readLine())
                l = int(st.nextToken())
                r = int(st.nextToken()) - 1
                pw.println(cum[r] - cum[l - 1])
                q -= 1

if __name__ == '__main__':
    main()