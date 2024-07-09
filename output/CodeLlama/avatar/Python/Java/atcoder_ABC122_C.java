import java.util.Scanner;
import java.util.stream.IntStream;

public class atcoder_ABC122_C {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int q = sc.nextInt();
        String s = sc.next();
        int[][] problems = new int[q][2];
        for (int i = 0; i < q; i++) {
            problems[i][0] = sc.nextInt();
            problems[i][1] = sc.nextInt();
        }
        int[] cumsum = IntStream.range(0, n).map(i -> {
            if (i == 0) return 0;
            if (s.substring(i - 1, i + 1).equals("AC")) return 1;
            return 0;
        }).toArray();
        for (int[] problem : problems) {
            System.out.println(cumsum[problem[1] - 1] - cumsum[problem[0] - 1]);
        }
    }
}