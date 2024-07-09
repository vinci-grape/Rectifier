import java.util.*;
import java.io.*;

public class s247537353 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int A = in.nextInt();
        int B = in.nextInt();
        int C = in.nextInt();
        int K = in.nextInt();
        if (A + B >= K) {
            System.out.println(Math.min(A, K));
        } else {
            System.out.println(A - (K - (A + B)));
        }
    }
}