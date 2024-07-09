import java.util.*;
import java.lang.*;
import java.io.*;

public class s240627521 {
    public static void main(String[] args) throws java.lang.Exception {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        ArrayList<Long> A = new ArrayList<>();
        for (int i = 0; i < N; ++i) {
            A.add(sc.nextLong());
        }
        Collections.sort(A, Collections.reverseOrder());
        int index;
        long max = Integer.MAX_VALUE;
        for (int i = 1; i < N; ++i) {
            if (max > Math.abs(A.get(0) - 2 * A.get(i))) {
                max = Math.abs(A.get(0) - 2 * A.get(i));
                index = i;
            }
        }
        System.out.println(A.get(0) + " " + A.get(index));
    }
}