import java.util.*;
import java.io.*;

public class atcoder_AGC038_A {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] H = br.readLine().split(" ");
        String[] W = br.readLine().split(" ");
        String[] A = br.readLine().split(" ");
        String[] B = br.readLine().split(" ");
        int H1 = Integer.parseInt(H[0]);
        int W1 = Integer.parseInt(W[0]);
        int A1 = Integer.parseInt(A[0]);
        int B1 = Integer.parseInt(B[0]);
        String[][] answer = new String[H1][W1];
        for (int i = 0; i < H1; i++) {
            for (int j = 0; j < W1; j++) {
                if (i < B1) {
                    if (j < A1) {
                        answer[i][j] = "0";
                    } else {
                        answer[i][j] = "1";
                    }
                } else {
                    if (j < A1) {
                        answer[i][j] = "1";
                    } else {
                        answer[i][j] = "0";
                    }
                }
            }
        }
        for (int i = 0; i < H1; i++) {
            System.out.println(String.join("", answer[i]));
        }
    }
}