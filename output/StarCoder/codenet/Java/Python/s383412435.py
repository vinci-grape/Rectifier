import sys

def main():
    N = int(raw_input().strip())
    a = [int(a_temp) for a_temp in raw_input().strip().split(' ')]
    a.sort()
    if N == 1 and a[0] > 1:
        ans = 1
    else:
        ans = 0
        for j in range(N):
            if j == 0 or a[j]!= a[j-1]:
                tmp = 1
                for i in range(j+1, N):
                    if a[j] == a[i]:
                        tmp += 1
                    else:
                        break
                if tmp > a[j]:
                    ans += tmp - a[j]
                elif tmp < a[j]:
                    ans += tmp
    print ans

if __name__ == "__main__":
    main()