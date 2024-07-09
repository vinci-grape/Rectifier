def main():
    N = int(input())
    a = [int(i) for i in input().split()]
    a.sort()
    if N == 1 and a[0] > 1:
        ans = 1
    else:
        for j in range(0, N):
            if j == 0 or a[j]!= a[j - 1]:
                tmp = 1
                for i in range(j+1, N):
                    if a[j] == a[i]:
                        tmp += 1
                    else:
                        break
                
                if tmp > a[j]:
                    ans += tmp - a[j]
                else:
                    ans += tmp
    print(ans)

if __name__ == '__main__':
    main()