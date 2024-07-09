import java.util.Scanner;
import java.util.LinkedList;
import java.util.Queue;

public class s525470559 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int q = sc.nextInt();
        int elaps = 0;
        Queue<Task> Q = new LinkedList<Task>();

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
    public String name;
    public int time;
}