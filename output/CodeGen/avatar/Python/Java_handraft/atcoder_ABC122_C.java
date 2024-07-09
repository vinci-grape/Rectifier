import java.util.*;
import java.lang.*;
import java.io.*;

public class atcoder_ABC122_C {
        public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int q = sc.nextInt();
        String s = sc.next();
        int[] problems = new int[q];
        for(int i = 0; i < q; i++) {
            problems[i] = sc.nextInt();
        }
        int[] cumsum = new int[n];
        cumsum[0] = 0;
        for(int i = 1; i < n; i++) {
            cumsum[i] = cumsum[i-1] + 1;
        }
        for(int i = 0; i < q; i++) {
            int l = problems[i];
            int r = problems[i+1];
            int count = cumsum[r] - cumsum[l-1];
            System.out.println(count);
        }
    }
}