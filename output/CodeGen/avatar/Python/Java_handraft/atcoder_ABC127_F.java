public class atcoder_ABC127_F {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int q = in.nextInt();
        int[] p1 = new int[q];
        int[] p2 = new int[q];
        int[] b = new int[q];
        for (int i = 0; i < q; i++) {
            b[i] = in.nextInt();
        }
        for (int i = 0; i < q; i++) {
            p1[i] = in.nextInt();
        }
        for (int i = 0; i < q; i++) {
            p2[i] = in.nextInt();
        }
        int sum_b = 0;
        int sum_p1 = 0;
        int sum_p2 = 0;
        for (int i = 0; i < q; i++) {
            if (b[i] == 2) {
                if (p1.length == p2.length) {
                    System.out.println(-p2[0], sum_p1 - p1.length * -p2[0] + p2.length * -p2[0] - sum_p2 + sum_b);
                } else {
                    System.out.println(p1[0], sum_p1 - p1.length * p1[0] + p2.length * p1[0] - sum_p2 + sum_b);
                }
            } else {
                sum_b += b[i];
                if (p1.length == 0) {
                    heapq.heappush(p1, p1[i]);
                    sum_p1 += p1[i];
                } else if (p1[0] <= p1[i]) {
                    heapq.heappush(p1, p1[i]);
                    sum_p1 += p1[i];
                } else {
                    heapq.heappush(p2, -p1[i]);
                    sum_p2 += p1[i];
                }
                if (p1.length - 1 > p2.length) {
                    heapq.heappop(p2);
                    sum_p2 += p2[0];
                    sum_p1 -= p2[0];
                }
                if (p1.length - 1 > p2.length) {
                    heapq.heappop(p1);
                    sum_p1 -= p1[0];
                    sum_p2 += p1[0];
                }
            }
            if (p1.length - 1 > p2.length) {
                heapq.heappop(p2);
                sum_p2 += p2[0];
                sum_p1 -= p2[0];
            }
            if (p1.length - 1 > p2.length) {
                heapq.heappop(p1);
                sum_p1 -= p1[0];
                sum_p2 += p1[0];
            }
        }
    }
}