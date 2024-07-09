import java.util.*;

public class s016605598 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int const_val = 0;
        PriorityQueue<Integer> left = new PriorityQueue<>(Collections.reverseOrder());
        PriorityQueue<Integer> right = new PriorityQueue<>();
        
        int q = sc.nextInt();
        int cnt = 0;
        int left_sum = 0;
        int right_sum = 0;
        
        for (int i = 0; i < q; i++) {
            int[] t = new int[3];
            for (int j = 0; j < 3; j++) {
                t[j] = sc.nextInt();
            }
            
            if (t[0] == 1) {
                // update
                int a = t[1];
                int b = t[2];
                const_val += b;
                
                if (cnt % 2 == 0) {
                    if (right.isEmpty()) {
                        left.offer(-a);
                        left_sum += a;
                        cnt += 1;
                        continue;
                    }
                    
                    int c = right.poll();
                    right_sum -= c;
                    
                    if (a <= c) {
                        left.offer(-a);
                        right.offer(c);
                        left_sum += a;
                        right_sum += c;
                    } else {
                        left.offer(-c);
                        right.offer(a);
                        left_sum += c;
                        right_sum += a;
                    }
                } else {
                    int c = left.poll();
                    left_sum += c;
                    
                    if (a <= -c) {
                        left.offer(-a);
                        right.offer(-c);
                        left_sum += a;
                        right_sum -= c;
                    } else {
                        left.offer(c);
                        right.offer(a);
                        left_sum -= c;
                        right_sum += a;
                    }
                }
                
                cnt += 1;
            } else {
                int tmp = -left.peek();
                System.out.println(tmp + " " + (const_val - left_sum + right_sum + tmp * (cnt % 2)));
            }
        }
    }
}