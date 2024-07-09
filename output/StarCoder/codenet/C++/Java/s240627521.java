import java.util.*;
import java.io.*;

public class s240627521 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int[] A = new int[N];
        for(int i=0;i<N;++i) A[i] = sc.nextInt();
        Arrays.sort(A);
        int index = 0;
        int max = Integer.MAX_VALUE;
        for(int i=1;i<N;++i) {
            if(max>Math.abs(A[0]-2*A[i])) {
                max = Math.abs(A[0]-2*A[i]);
                index = i;
            }
        }
        System.out.println(A[0]+" "+A[index]);
    }
}