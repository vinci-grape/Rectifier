def main():
    K = int(input())
    if K % 2 == 0 or K % 5 == 0:
        return -1
    if K % 7 == 0:
        K /= 7
    K *= 9
    ans = 1
    remainder = 10 % K
    while remainder!= 1:
        ans += 1
        remainder = remainder * 10 % K
    return ans

if __name__ == "__main__":
    T = int(input())
    for i in range(T):
        print(main())