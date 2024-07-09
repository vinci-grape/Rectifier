import java.util.*;
import java.lang.*;
import java.io.*;

public class s240627521
{
    public static void main (String[] args) throws java.lang.Exception
    {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        long[] A = new long[N];
        for(int i=0;i<N;++i) A[i] = sc.nextLong();
        Arrays.sort(A, Collections.reverseOrder());
        int index;
        long max = Long.MAX_VALUE;
        for(int i=1;i<N;++i) {
            if(max>Math.abs(A[0]-2*A[i])) {
                max = Math.abs(A[0]-2*A[i]);
                index = i;
            }
        }
        System.out.println(A[0]+" "+A[index]);
    }
}