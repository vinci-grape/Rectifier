import java.util.*;
import java.io.*;
import java.math.*;
import java.text.*;
import java.awt.Point;

import static java.lang.Math.*;

public class atcoder_ABC089_C {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        int T = Integer.parseInt(br.readLine());
        for(int t = 0; t < T; t++) {
            int N = Integer.parseInt(br.readLine());
            String[] S = br.readLine().split(" ");
            int[] arr = new int[N];
            for(int i = 0; i < N; i++) {
                arr[i] = Integer.parseInt(S[i]);
            }
            int ans = 0;
            for(int i = 0; i < N; i++) {
                for(int j = i + 1; j < N; j++) {
                    for(int k = j + 1; k < N; k++) {
                        ans += arr[i] * arr[j] * arr[k];
                    }
                }
            }
            bw.write(ans + "\n");
        }
        bw.close();
    }
}