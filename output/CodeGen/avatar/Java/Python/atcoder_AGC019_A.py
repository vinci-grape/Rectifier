def main(args):
    sc = Scanner(System.in)
    Q = sc.nextLong()
    H = sc.nextLong()
    S = sc.nextLong()
    D = sc.nextLong()
    N = sc.nextLong()
    onePrice = min(min(Q * 4, H * 2), S)
    if (onePrice <= D / 2):
        print(N * onePrice)
    else:
        print((N / 2) * D + (N % 2) * onePrice)

# Note:
#
# 1. The maximum value of N is 10^9.
# 2. The maximum value of onePrice is 10^9.
# 3. The maximum value of D is 10^9.
# 4. The maximum value of Q is 10^9.
# 5. The maximum value of H is 10^9.
# 6. The maximum value of S is 10^9.
# 7. The maximum value of N is 10^9.
# 8. The maximum value of onePrice is 10^9.
# 9. The maximum value of D is 10^9.
# 10. The maximum value of Q is 10^9.
# 11. The maximum value of H is 10^9.
# 12. The maximum value of S is 10^9.