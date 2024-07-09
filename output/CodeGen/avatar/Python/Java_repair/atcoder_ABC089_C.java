import java.util.*;
import java.io.*;
import java.math.*;
import java.text.*;
import java.awt.*;

import static java.lang.Math.*;

public class atcoder_ABC089_C {
    public static void main(String[] args) throws IOException {
        Scanner scanner = new Scanner(System.in);
        int T = Integer.parseInt(scanner.nextLine());
        for(int t = 0; t < T; t++) {
            int N = Integer.parseInt(scanner.nextLine());
            String[] S = scanner.nextLine().split(" ");
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
            System.out.println(ans + "\n");
        }
        System.out.close();
    }
}