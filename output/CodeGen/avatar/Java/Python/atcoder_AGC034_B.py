def main():
    inputStream = sys.stdin
    outputStream = sys.stdout
    in = sys.stdin
    out = sys.stdout
    BABC = atcoder_AGC034_B()
    BABC.solve(1, in, out)
    out.close()

class atcoder_AGC034_B:
    def solve(self, testNumber, in, out):
        s = in.read().replace('BC', 'D')
        cnt = 0
        tmp = 0
        for i in range(len(s)):
            if s[i] == 'A':
                tmp += 1
            else:
                cnt += tmp
                tmp = 0
        out.write(str(cnt))

if __name__ == '__main__':
    main()