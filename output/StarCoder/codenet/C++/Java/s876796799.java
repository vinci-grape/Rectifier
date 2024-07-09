import java.util.*;
import java.io.*;

public class s876796799 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int N = in.nextInt();
        long[] a = new long[N];
        for(int i = 0; i < N; i++){
            a[i] = in.nextLong();
        }
        long ans = 0;
        int[] ind_a = new int[N];
        for(int i = 0; i < N; i++){
            ind_a[a[i] - 1] = i;
        }
        TreeSet<Integer> used_inds = new TreeSet<Integer>();
        for(int i = 0; i < N; i++){
            long left_border;
            long right_border;
            long cur_ind = ind_a[i];
            Iterator<Integer> left_it = used_inds.lower(cur_ind);
            Iterator<Integer> right_it = used_inds.lower(cur_ind + 1);

            if(!left_it.hasNext()){
                left_border = -1;
            } else {
                if(!right_it.hasNext() || right_it.next() > cur_ind){
                    left_it.previous();
                }
                left_border = left_it.next();
            }
            if(!right_it.hasNext()){
                right_border = N;
            } else {
                right_border = right_it.next();
            }
            ans += (cur_ind - left_border) * (right_border - cur_ind) * ((long)i + 1);

            used_inds.add(cur_ind);
        }

        System.out.println(ans);
    }
}