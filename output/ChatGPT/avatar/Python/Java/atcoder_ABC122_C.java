import java.util.*;

public class atcoder_ABC122_C {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int q = scanner.nextInt();
        String s = scanner.next();
        int[][] problems = new int[q][2];
        for (int i = 0; i < q; i++) {
            problems[i][0] = scanner.nextInt();
            problems[i][1] = scanner.nextInt();
        }

        int[] cumsum = new int[n+1];
        cumsum[0] = 0;
        for (int i = 1; i <= n; i++) {
            cumsum[i] = count(cumsum[i-1], s, i);
        }

        for (int i = 0; i < q; i++) {
            int l = problems[i][0];
            int r = problems[i][1];
            System.out.println(cumsum[r] - cumsum[l-1]);
        }
    }

    public static int count(int total, String s, int i) {
        if (s.substring(i-1, i+1).equals("AC")) {
            return total + 1;
        } else {
            return total;
        }
    }
}