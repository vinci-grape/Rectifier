import sys

def main():
    n = int(sys.stdin.readline())
    T = {}
    for i in range(n):
        com, str = sys.stdin.readline().split()
        if com == 'i':
            T[str] = True
        else:
            if str in T:
                print('yes')
            else:
                print('no')

if __name__ == '__main__':
    main()