def main():
    sc = Scanner(sys.stdin)
    A = sc.nextInt()
    B = sc.nextInt()
    C = sc.nextInt()
    if A == B and B == C and C == A:
        print("Yes")
    else:
        print("No")

if __name__ == "__main__":
    main()