def rec(x):
    answer = 0
    for k in range(31, -1, -1):
        if (x & (1 << k)):
            answer += 1
    return answer

def main():
    n = int(input())
    a = [0] * 33
    for i in range(n):
        a[rec(int(input()))] += 1
    answer = 0
    for i in range(33):
        answer += (1 + a[i] - 1) / 2.0 * (a[i] - 1)
    print(answer)

main()