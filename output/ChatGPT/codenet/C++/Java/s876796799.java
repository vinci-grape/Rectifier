import java.util.*;

public class s876796799 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        long[] a = new long[N];
        for (int i = 0; i < N; i++) {
            a[i] = scanner.nextLong();
        }
        
        int[] ind_a = new int[N];
        for (int i = 0; i < N; i++) {
            ind_a[(int)a[i] - 1] = i;
        }
        
        Set<Integer> used_inds = new HashSet<>();
        long ans = 0;
        for (int i = 0; i < N; i++) {
            long left_border;
            long right_border;
            long cur_ind = ind_a[i];
            Iterator<Integer> left_it = used_inds.iterator();
            Iterator<Integer> right_it = used_inds.iterator();
            
            while (left_it.hasNext()) {
                int num = left_it.next();
                if (num > cur_ind) {
                    break;
                }
                left_border = num;
            }
            
            if (!right_it.hasNext()) {
                right_border = N;
            } else {
                right_border = right_it.next();
            }
            
            ans += (cur_ind - left_border) * (right_border - cur_ind) * ((long)i + 1);
            used_inds.add((int)cur_ind);
        }
        
        System.out.println(ans);
    }
}