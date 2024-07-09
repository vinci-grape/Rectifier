import java.util.*;

public class s016605598 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int q = sc.nextInt();
        int cnt = 0;
        int left_sum = 0;
        int right_sum = 0;
        PriorityQueue<Integer> left = new PriorityQueue<Integer>(new Comparator<Integer>() {
            @Override
            public int compare(Integer o1, Integer o2) {
                return o2 - o1;
            }
        });
        PriorityQueue<Integer> right = new PriorityQueue<Integer>(new Comparator<Integer>() {
            @Override
            public int compare(Integer o1, Integer o2) {
                return o1 - o2;
            }
        });
        int const = 0;
        for (int i = 0; i < q; i++) {
            int[] t = new int[3];
            for (int j = 0; j < 3; j++) {
                t[j] = sc.nextInt();
            }
            if (t[0] == 1) {
                // update
                int a = t[1];
                int b = t[2];
                const += b;
                if (cnt % 2 == 0) {
                    if (right.isEmpty()) {
                        left.add(-a);
                        left_sum += a;
                        cnt++;
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
                    c = left.poll();
                    left_sum += c;
                    if (a <= -c) {
                        left.add(c);
                        right.add(-a);
                        left_sum -= c;
                        right_sum += a;
                    } else {
                        left.add(-a);
                        right.add(c);
                        left_sum += a;
                        right_sum -= c;
                    }
                }
                cnt++;
            } else {
                int tmp = -left.peek();
                System.out.println(tmp + " " + (const - left_sum + right_sum + tmp * (cnt % 2)));
            }
        }
    }
}