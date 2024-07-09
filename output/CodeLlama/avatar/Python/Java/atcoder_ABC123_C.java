import java.util.*;
import java.lang.*;
import java.io.*;
public class atcoder_ABC123_C {
    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int[] A = new int[5];
        for(int i = 0; i < 5; i++) {
            A[i] = sc.nextInt();
        }
        System.out.println((int)Math.ceil((double)N / (double)Collections.min(Arrays.asList(A))) + 4);
    }
}