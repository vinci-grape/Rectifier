import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

class Task {
    String name;
    int time;
}

public class s525470559 {
    public static void main(String[] args) {
        int n, q;
        int elaps = 0;
        Queue<Task> Q = new LinkedList<>();

        Scanner scanner = new Scanner(System.in);
        n = scanner.nextInt();
        q = scanner.nextInt();

        for (int i = 0; i < n; i++) {
            Task tmp = new Task();
            tmp.name = scanner.next();
            tmp.time = scanner.nextInt();
            Q.add(tmp);
        }

        while (!Q.isEmpty()) {
            Task p = Q.poll();
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