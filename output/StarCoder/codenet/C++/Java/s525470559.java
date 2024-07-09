import java.util.*;

public class s525470559 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int q = sc.nextInt();
        int elaps = 0;
        PriorityQueue<Task> Q = new PriorityQueue<Task>(n, new Comparator<Task>() {
            @Override
            public int compare(Task a, Task b) {
                return a.time - b.time;
            }
        });

        for(int i = 0; i < n; i++) {
            Task tmp = new Task();
            tmp.name = sc.next();
            tmp.time = sc.nextInt();
            Q.add(tmp);
        }

        while(!Q.isEmpty()) {
            Task p = Q.poll();
            if(p.time <= q) {
                elaps += p.time;
                System.out.println(p.name + " " + elaps);
            }
            else {
                p.time -= q;
                elaps += q;
                Q.add(p);
            }
        }
    }
}

class Task {
    String name;
    int time;
}