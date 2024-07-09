import java.util.Scanner;

public class s644382798 {
    static class P {
        String name;
        int t;

        P(String name, int t) {
            this.name = name;
            this.t = t;
        }
    }

    static P[] Q;
    static int head, tail, n;

    static void enqueue(P x) {
        Q[tail] = x;
        tail = (tail + 1) % LEN;
    }

    static P dequeue() {
        P x = Q[head];
        head = (head + 1) % LEN;
        return x;
    }

    static int min(int a, int b) {
        return a < b ? a : b;
    }

    public static void main(String[] args) {
        int elaps = 0, c;
        int i, q;
        P u;
        Scanner sc = new Scanner(System.in);

        n = sc.nextInt();
        q = sc.nextInt();
        Q = new P[n + 1];

        for (i = 1; i <= n; i++) {
            String name = sc.next();
            int t = sc.nextInt();
            Q[i] = new P(name, t);
        }
        head = 1;
        tail = n + 1;

        while (head != tail) {
            u = dequeue();
            c = min(q, u.t);
            u.t -= c;
            elaps += c;
            if (u.t > 0)
                enqueue(u);
            else
                System.out.println(u.name + " " + elaps);
        }
    }
}