import sys

def main():
    d = int(raw_input())
    for i in range(d):
        n = int(raw_input())
        if n == 1:
            print "#"
        else:
            for i in range(n+2):
                map = ['#']*(n+2)
                map[0] = map[n+1] = '.'
                for j in range(n):
                    map[j+1] = '#' if j+1 == n-1 else '.'
                for j in range(n+2):
                    print map[j],
                print
        if i!= d-1:
            print

if __name__ == "__main__":
    main()