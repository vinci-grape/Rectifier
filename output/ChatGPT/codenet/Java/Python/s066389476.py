def solve():
    a = input()
    if a[0] == a[1] or a[1] == a[2] or a[2] == a[0]:
        print("No")
    else:
        print("Yes")

solve()