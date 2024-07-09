def main(args):
    sc = Scanner(System.in)
    N = sc.nextInt()
    x = [0] * N
    u = []
    for i in range(N):
        x[i] = sc.nextDouble()
        u.append(sc.next())
    print(solve(x, u))
    sc.close()

def solve(x, u):
    return sum(map(lambda i: x[i] * (u[i] == "JPY" and 1 or 380000), range(len(x))))