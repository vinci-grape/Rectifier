import sys

def solve(sc):
    a = sc.readline().strip()
    if a[0] == a[1] or a[1] == a[2] or a[2] == a[0]:
        print('No')
    else:
        print('Yes')

if __name__ == '__main__':
    solve(sys.stdin)