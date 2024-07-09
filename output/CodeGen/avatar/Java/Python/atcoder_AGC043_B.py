def cal(s,c):
    n = len(s)
    m = n - 1
    ans = 0
    for i in range(0,n):
        if s[i] == c and (m & i) == i:
            ans ^= 1
    return ans

def solve():
    n = int(input())
    s = input()
    if n == 2:
        print(s[0])
    else:
        if s.count('1') > 0:
            print(cal(s,'1'))
        else:
            print(cal(s,'2') * 2)

if __name__ == '__main__':
    out = sys.stdout
    sc = sys.stdin
    main(sys.argv)