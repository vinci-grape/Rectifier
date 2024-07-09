import java.util.PriorityQueue;
import java.util.Scanner;

public class atcoder_ABC137_D {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int m = scanner.nextInt();
        PriorityQueue<Integer> x = new PriorityQueue<>();
        PriorityQueue<Integer> y = new PriorityQueue<>();

        for (int i = 0; i < n; i++) {
            int day = scanner.nextInt();
            int salary = scanner.nextInt();
            x.offer(-day);
            x.offer(-salary);
        }

        while (!x.isEmpty()) {
            int d = x.poll();
            int s = x.poll();
            int r = m - y.size();
            
            if (r >= -d) {
                y.offer(-s);
            } else {
                y.offer(-s);
                y.poll();
            }
        }

        int sum = 0;
        while (!y.isEmpty()) {
            sum += y.poll();
        }

        System.out.println(sum);
    }
}