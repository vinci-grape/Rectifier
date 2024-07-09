import java.util.PriorityQueue;
import java.util.Scanner;

public class atcoder_ABC127_F {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int q = sc.nextInt();
        int[] ans = new int[2];
        PriorityQueue<Integer> p1 = new PriorityQueue<Integer>();
        PriorityQueue<Integer> p2 = new PriorityQueue<Integer>(Collections.reverseOrder());
        int sum_b = 0;
        int sum_p1 = 0;
        int sum_p2 = 0;
        for (int i = 0; i < q; i++) {
            int[] ql = new int[3];
            ql[0] = sc.nextInt();
            ql[1] = sc.nextInt();
            ql[2] = sc.nextInt();
            if (ql[0] == 2) {
                if (p1.size() == p2.size()) {
                    ans[0] = -p2.peek();
                    ans[1] = sum_p1 - p1.size() * ans[0] + p2.size() * ans[0] - sum_p2 + sum_b;
                } else {
                    ans[0] = p1.peek();
                    ans[1] = sum_p1 - p1.size() * ans[0] + p2.size() * ans[0] - sum_p2 + sum_b;
                }
                System.out.println(ans[0] + " " + ans[1]);
            } else {
                sum_b += ql[2];
                if (p1.size() == 0) {
                    p1.add(ql[1]);
                    sum_p1 += ql[1];
                } else if (p1.peek() <= ql[1]) {
                    p1.add(ql[1]);
                    sum_p1 += ql[1];
                } else {
                    p2.add(-ql[1]);
                    sum_p2 += ql[1];
                }
                if (p1.size() < p2.size()) {
                    int k = p2.poll();
                    p1.add(-k);
                    sum_p2 += k;
                    sum_p1 -= k;
                }
                if (p1.size() - 1 > p2.size()) {
                    int k = p1.poll();
                    p2.add(-k);
                    sum_p1 -= k;
                    sum_p2 += k;
                }
            }
        }
    }
}