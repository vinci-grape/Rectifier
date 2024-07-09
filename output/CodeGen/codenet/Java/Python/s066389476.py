def main():
    try:
        sc = Scanner(System.in)
        a = sc.next().strip()
        if a[0] == a[1] or a[1] == a[2] or a[2] == a[0]:
            print("No")
        else:
            print("Yes")
    except Exception as e:
        print(e)

if __name__ == '__main__':
    main()