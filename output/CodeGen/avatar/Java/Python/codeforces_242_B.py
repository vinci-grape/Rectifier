def main():
    n = int(input())
    a = []
    b = []
    for i in range(n):
        a.append(int(input()))
        b.append(int(input()))
        left = INF
        right = 0
        for j in range(n):
            left = min(left, a[j])
            right = max(right, b[j])
        for j in range(n):
            if left == a[j] and right == b[j]:
                print(j + 1)
                return
    print(-1)