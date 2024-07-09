import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Queue;

public class s085712108 {
    static class QUEUE {
        int a, b, c, tot;

        public QUEUE(int a, int b, int c, int tot) {
            this.a = a;
            this.b = b;
            this.c = c;
            this.tot = tot;
        }
    }

    static int[][] F = {{1, 1, 0}, {1, 0, 1}, {0, 1, 1}, {2, 0, 0}, {0, 2, 0}, {0, 0, 2}};
    static ArrayList<Integer>[] Hash;
    static int MOD = 7007;

    static boolean HASH(int n) {
        if (Hash[n % MOD].contains(n))
            return false;
        Hash[n % MOD].add(n);
        return true;
    }

    public static void main(String[] args) {
        Hash = new ArrayList[MOD];
        for (int i = 0; i < MOD; i++) {
            Hash[i] = new ArrayList<>();
        }
        QUEUE Push = new QUEUE(0, 0, 0, 0);
        Queue<QUEUE> que = new LinkedList<>();
        Push.tot = 0;
        Push.a = 1; // Input the value for a
        Push.b = 1; // Input the value for b
        Push.c = 1; // Input the value for c
        que.add(Push);
        while (!que.isEmpty()) {
            QUEUE Fro = que.peek();
            if (Fro.a == Fro.b && Fro.b == Fro.c) {
                System.out.println(Fro.tot);
                return;
            }
            for (int i = 0; i < 6; i++) {
                Push = new QUEUE(Fro.a, Fro.b, Fro.c, Fro.tot);
                Push.tot++;
                Push.a += F[i][0];
                Push.b += F[i][1];
                Push.c += F[i][2];
                int n = Push.a * 10000 + Push.b * 100 + Push.c;
                if (!HASH(n))
                    continue;
                que.add(Push);
            }
            que.poll();
        }
    }
}