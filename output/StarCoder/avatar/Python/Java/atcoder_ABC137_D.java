import java.util.PriorityQueue;
import java.util.Scanner;
public class atcoder_ABC137_D {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        PriorityQueue<Integer> x = new PriorityQueue<>((a, b) -> a - b);
        PriorityQueue<Integer> y = new PriorityQueue<>((a, b) -> a - b);
        for (int i = 0; i < n; i++) {
            int day = sc.nextInt();
            int salary = sc.nextInt();
            x.add(-day);
            x.add(-salary);
        }
        while (!x.isEmpty()) {
            int d = x.poll();
            int s = x.poll();
            int r = m - y.size();
            if (r >= -d) {
                y.add(-s);
            } else {
                y.add(-s);
                y.poll();
            }
        }
        System.out.println(y.stream().mapToInt(i -> i).sum());
    }
}

