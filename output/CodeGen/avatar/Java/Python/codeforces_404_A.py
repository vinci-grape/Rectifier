def main(args):
    n = int(input())
    arr = [[] for _ in range(n)]
    str = []
    for i in range(n):
        str.append(input())
    for i in range(n):
        for j in range(n):
            arr[i].append(str[i][j])
    a = arr[0][0]
    b = arr[0][1]
    if a == b:
        print("NO")
    else:
        res = True
        for i in range(n):
            for j in range(n):
                if i == j or i + j == n - 1:
                    if arr[i][j]!= a:
                        res = False
                        break
                else:
                    if arr[i][j]!= b:
                        res = False
                        break
        if res:
            print("YES")
        else:
            print("NO")

if __name__ == "__main__":
    main(sys.argv)