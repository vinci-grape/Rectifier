def main():
    sc = Scanner(System.in)
    s = sc.next()
    total = 0
    for i in range(len(s)):
        for j in range(i+1, len(s)):
            if s[i] == s[j]:
                total += 1
    print(total == 2 and "Yes" or "No")

if __name__ == "__main__":
    main()