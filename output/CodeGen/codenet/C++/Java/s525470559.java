public class s525470559 {
    public static void main(String[] args) {
        int n, q;
        int elaps = 0;
        queue<task> Q;

        Scanner in = new Scanner(System.in);
        n = in.nextInt();
        q = in.nextInt();

        for (int i = 0; i < n; i++) {
            task tmp;
            tmp.name = in.next();
            tmp.time = in.nextInt();
            Q.add(tmp);
        }

        while (!Q.isEmpty()) {
            task p = Q.remove();
            if (p.time <= q) {
                elaps += p.time;
                System.out.println(p.name + " " + elaps);
            } else {
                p.time -= q;
                elaps += q;
                Q.add(p);
            }
        }
    }
}