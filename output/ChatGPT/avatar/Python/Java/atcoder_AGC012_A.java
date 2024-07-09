import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

public class atcoder_AGC012_A {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        List<Integer> A = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            A.add(input.nextInt());
        }
        Collections.sort(A);
        int ans = 0;
        for (int i = A.size() - 2; i >= A.size() - 2 * n - 1; i -= 2) {
            ans += A.get(i);
        }
        System.out.println(ans);
    }
}