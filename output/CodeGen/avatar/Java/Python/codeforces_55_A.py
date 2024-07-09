def main():
    n = int(input())
    a = [0] * 1000
    k = 0
    i = 1
    while k <= n:
        i += k
        if i >= n:
            while not (i < n):
                i = i - n
            a[i] += 1
            k += 1
    for i in range(n):
        if a[i] == 0:
            flag = False
            break
    if flag:
        print("YES")
    else:
        print("NO")

if __name__ == "__main__":
    main()