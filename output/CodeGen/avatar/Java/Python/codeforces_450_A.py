def main(args):
    sc = Scanner(System.in)
    n = sc.nextInt()
    m = sc.nextInt()
    q1 = []
    q2 = []
    for i in range(1, n+1):
        q1.append(sc.nextInt())
        q2.append(i)
    while q1:
        if q1[0] <= m:
            q1.pop(0)
            q2.pop(0)
            ans = q2.pop(0)
        else:
            if q1[0] > m:
                q1.pop(0)
                q2.pop(0)
                q1.append(q1[0]-m)
                q2.append(q2[0])
    print(ans)