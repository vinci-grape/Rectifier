import java.util.*;
import java.lang.*;
import java.math.*;
import java.util.regex.*;

public class atcoder_ABC152_C {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] n_arr = new int[n];
        for(int n_i=0; n_i < n; n_i++){
            n_arr[n_i] = in.nextInt();
        }
        int a = 1;
        int pos = 0;
        for(int i=1; i<n; i++){
            if(n_arr[pos] > n_arr[i]){
                a++;
                pos = i;
            }
        }
        System.out.println(a);
    }
}