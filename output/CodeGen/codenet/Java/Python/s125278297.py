class Main:
    def main(argv):
        h = int(input())
        w = int(input())
        ans = []
        for i in range(h):
            ans.append(input() + '#')
        print(chr(0) * (w + 2))
        for s in ans:
            print(s)
        print(chr(0) * (w + 2))

if __name__ == '__main__':
    import sys
    sys.exit(0)