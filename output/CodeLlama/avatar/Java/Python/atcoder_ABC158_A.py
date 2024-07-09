import sys

def main():
    input = sys.stdin.readline
    output = sys.stdout.write
    s = input().strip()
    if 'A' in s and 'B' in s:
        output('Yes\n')
    else:
        output('No\n')

if __name__ == '__main__':
    main()