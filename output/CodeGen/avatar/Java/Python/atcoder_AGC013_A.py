def main(args):
    stdin = input()
    N = int(stdin.next())
    A = [int(x) for x in stdin.next().split()]
    count = 0
    for i in range(N-1):
        if A[i] == A[i+1]:
            pass
        elif A[i] < A[i+1]:
            while A[i] <= A[i+1]:
                i += 1
                if i == N-1:
                    break
            count += 1
        else:
            while A[i] >= A[i+1]:
                i += 1
                if i == N-1:
                    break
            count += 1
    print(count)