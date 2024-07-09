import sys

def main():
    while True:
        try:
            n = int(input())
            if n == 0:
                break
            v = []
            for i in range(n):
                v.append([0, input()])
            for i in range(n):
                m = int(input())
                for j in range(m):
                    a = int(input())
                    v[i][0] += n - len(d[a])
                    for k in d[a]:
                        v[k][0] -= 1
                    d[a].append(i)
            v.sort()
            print(v[0][0], v[0][1])
        except EOFError:
            break

if __name__ == '__main__':
    d = [[] for i in range(33)]
    main()