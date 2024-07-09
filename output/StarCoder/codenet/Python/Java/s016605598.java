import java.util.PriorityQueue;
import java.util.Scanner;

public class s016605598 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int q = sc.nextInt();
        int cnt = 0;
        int left_sum = 0;
        int right_sum = 0;
        PriorityQueue<Integer> left = new PriorityQueue<>();
        PriorityQueue<Integer> right = new PriorityQueue<>((a, b) -> b - a);
        for (int i = 0; i < q; i++) {
            int[] t = new int[3];
            t[0] = sc.nextInt();
            t[1] = sc.nextInt();
            t[2] = sc.nextInt();
            if (t[0] == 1) {
                // update
                int a = t[1];
                int b = t[2];
                cnt++;
                if (cnt % 2 == 0) {
                    if (right.isEmpty()) {
                        left.add(-a);
                        left_sum += a;
                        continue;
                    }
                    int c = right.poll();
                    right_sum -= c;
                    if (a <= c) {
                        left.add(-a);
                        right.add(c);
                        left_sum += a;
                        right_sum += c;
                    } else {
                        left.add(-c);
                        right.add(a);
                        left_sum += c;
                        right_sum += a;
                    }
                } else {
                    int c = left.poll();
                    left_sum += c;
                    if (a <= -c) {
                        left.add(-a);
                        right.add(-c);
                        left_sum += a;
                        right_sum -= c;
                    } else {
                        left.add(c);
                        right.add(a);
                        left_sum -= c;
                        right_sum += a;
                    }
                }
            } else {
                int tmp = -left.peek();
                System.out.println(tmp + " " + (cnt % 2 == 0? left_sum + right_sum + tmp : left_sum + right_sum - tmp));
            }
        }
    }
}