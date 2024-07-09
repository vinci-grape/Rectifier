import java.util.*;
import java.lang.*;
import java.math.*;
import java.io.*;

public class atcoder_AGC012_A {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] A = new int[n];
        for(int A_i=0; A_i < n; A_i++){
            A[A_i] = in.nextInt();
        }
        A = Arrays.stream(A).sorted().toArray();
        int ans = 0;
        for(int i=0; i < n-2; i++){
            ans += A[i];
        }
        System.out.println(ans);
    }
}