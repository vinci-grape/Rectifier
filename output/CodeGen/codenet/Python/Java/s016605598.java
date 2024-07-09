import java.util.Comparator;
import java.util.PriorityQueue;
import java.util.Scanner;

public class s016605598 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int q = in.nextInt();
        int[] a = new int[q];
        int[] b = new int[q];
        int[] c = new int[q];
        for (int i = 0; i < q; i++) {
            a[i] = in.nextInt();
            b[i] = in.nextInt();
            c[i] = in.nextInt();
        }
        in.close();
        Comparator<Integer> comparator = new Comparator<Integer>() {
            @Override
            public int compare(Integer o1, Integer o2) {
                return o1 - o2;
            }
        };
        PriorityQueue<Integer> left = new PriorityQueue<Integer>(comparator);
        PriorityQueue<Integer> right = new PriorityQueue<Integer>(comparator);
        int cnt = 0;
        int left_sum = 0;
        int right_sum = 0;
        for (int i = 0; i < q; i++) {
            if (a[i] == 1) {
                if (cnt % 2 == 0) {
                    if (right.isEmpty()) {
                        left.add(-a[i]);
                        left_sum += a[i];
                        cnt += 1;
                        continue;
                    }
                    int c = right.poll();
                    right_sum -= c;
                    if (a[i] <= c) {
                        left.add(-a[i]);
                        left_sum += a[i];
                        right.add(c);
                        right_sum += c;
                    } else {
                        left.add(-c);
                        left_sum += c;
                        right.add(a[i]);
                        right_sum += a[i];
                    }
                } else {
                    if (left.isEmpty()) {
                        right.add(-a[i]);
                        right_sum += a[i];
                        cnt += 1;
                        continue;
                    }
                    int c = left.poll();
                    left_sum -= c;
                    if (a[i] <= -c) {
                        right.add(-a[i]);
                        right_sum += a[i];
                        left.add(-c);
                        left_sum -= c;
                    } else {
                        right.add(-c);
                        right_sum += c;
                        left.add(a[i]);
                        left_sum += a[i];
                    }
                }
                cnt += 1;
            } else {
                if (cnt % 2 == 0) {
                    if (right.isEmpty()) {
                        left.add(c[i]);
                        left_sum -= c[i];
                        cnt += 1;
                        continue;
                    }
                    int c = right.poll();
                    right_sum -= c;
                    if (a[i] <= c) {
                        left.add(c);
                        left_sum -= c;
                        right.add(a[i]);
                        right_sum += a[i];
                    } else {
                        left.add(a[i]);
                        left_sum += a[i];
                        right.add(-c);
                        right_sum -= c;
                    }
                } else {
                    if (left.isEmpty()) {
                        right.add(c[i]);
                        right_sum -= c[i];
                        cnt += 1;
                        continue;
                    }
                    int c = left.poll();
                    left_sum -= c;
                    if (a[i] <= -c) {
                        right.add(c);
                        right_sum -= c;
                        left.add(-a[i]);
                        left_sum += a[i];
                    } else {
                        right.add(-c);
                        right_sum += c;
                        left.add(a[i]);
                        left_sum -= c;
                    }
                }
                cnt += 1;
            }
        }
        System.out.println(left_sum + right_sum);
    }
}