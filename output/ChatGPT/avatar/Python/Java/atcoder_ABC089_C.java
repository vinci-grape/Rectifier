import java.util.Scanner;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;

public class atcoder_ABC089_C {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int N = input.nextInt();
        String[] S = new String[N];
        for (int i = 0; i < N; i++) {
            S[i] = input.next();
        }
        ArrayList<String> march = new ArrayList<>(Arrays.asList("M", "A", "R", "C", "H"));
        int[] march_lis = new int[5];
        for (String s : S) {
            if (march.contains(Character.toString(s.charAt(0)).toUpperCase())) {
                march_lis[march.indexOf(Character.toString(s.charAt(0)).toUpperCase())]++;
            }
        }
        int ans = 0;
        for (int x : march_lis) {
            for (int y : march_lis) {
                for (int z : march_lis) {
                    if (x != y && y != z && x != z) {
                        ans += x * y * z;
                    }
                }
            }
        }
        System.out.println(ans);
    }
}