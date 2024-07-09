import java.util.Scanner;
import java.util.PriorityQueue;
import java.util.Comparator;
import java.util.ArrayList;

public class s763208424 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        PriorityQueue<Integer> a = new PriorityQueue<>(Comparator.reverseOrder());
        for (int i = 0; i < n; i++) {
            a.add(sc.nextInt());
        }
        for (int i = 0; i < m; i++) {
            a.add(-dis(a.poll(), 1));
        }
        System.out.println(-sum(a));
    }

    public static int dis(int x, int y) {
        return x / (int) Math.pow(2, y);
    }

    public static int sum(PriorityQueue<Integer> a) {
        int sum = 0;
        while (!a.isEmpty()) {
            sum += a.poll();
        }
        return sum;
    }
}