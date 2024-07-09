import sys

def main():
    N = int(raw_input().strip())
    s = []
    a_num = 0
    b_num = 0
    flag = True
    ans = 0
    for i in xrange(N):
        s.append(raw_input().strip())
        if s[i][0] == 'B':
            b_num += 1
        if s[i][-1] == 'A':
            a_num += 1
        if s[i][0] == 'B' or s[i][-1] == 'A':
            if not (s[i][0] == 'B' and s[i][-1] == 'A'):
                flag = False
        for j in xrange(len(s[i]) - 1):
            if s[i][j:j+2] == 'AB':
                ans += 1
    ans += min(a_num, b_num)
    if min(a_num, b_num)!= 0 and flag:
        ans -= 1
    print ans

if __name__ == "__main__":
    main()