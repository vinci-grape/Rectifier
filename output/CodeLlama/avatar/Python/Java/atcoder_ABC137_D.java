import java.util.Scanner;
import java.util.PriorityQueue;
import java.util.Comparator;
public class atcoder_ABC137_D {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        PriorityQueue<Integer> x = new PriorityQueue<>(Comparator.comparingInt(a -> -a));
        PriorityQueue<Integer> y = new PriorityQueue<>(Comparator.comparingInt(a -> -a));
        for (int i = 0; i < n; i++) {
            int day = sc.nextInt();
            int salary = sc.nextInt();
            x.add(-day);
            x.add(-salary);
        }
        while (!x.isEmpty()) {
            int d = -x.poll();
            int s = -x.poll();
            int r = m - y.size();
            if (r >= -d) {
                y.add(-s);
            } else {
                y.add(-s);
                y.poll();
            }
        }
        int sum = 0;
        for (int i : y) {
            sum += i;
        }
        System.out.println(sum);
    }
}