public class s644382798 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int q = in.nextInt();
        P[] Q = new P[n + 1];
        int head = 1, tail = n + 1;
        P u;
        int c;
        int i;
        for (i = 1; i <= n; i++) {
            u = new P();
            u.name = in.next();
            u.t = in.nextInt();
            Q[i] = u;
        }
        head = 1;
        tail = n + 1;
        while (head!= tail) {
            u = Q[head];
            c = min(q, u.t);
            u.t -= c;
            elaps += c;
            if (u.t > 0) {
                Q[head] = u;
                head = (head + 1) % (n + 1);
            } else {
                System.out.printf("%s %d\n", u.name, elaps);
            }
        }
    }
}