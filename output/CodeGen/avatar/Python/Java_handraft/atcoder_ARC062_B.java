import java.util.Scanner;

public class atcoder_ARC062_B {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String input = scanner.nextLine();
        String[] strs = input.split(" ");
        System.out.println(findMaxForm(strs));
    }
    public static int findMaxForm(String[] strs) {
        int n = strs.length;
        int[] num_g = new int[n];
        int[] num_p = new int[n];
        int score = 0;
        for (int i = 0; i < n; i++) {
            if (strs[i].equals("g")) {
                num_g[i]++;
                if (num_g[i] > num_p[i]) {
                    score++;
                    num_p[i]++;
                } else {
                    score = score;
                    num_g[i]++;
                }
            } else if (strs[i].equals("p")){
                num_g[i]--;
                if (num_g[i] < num_p[i]) {
                    score--;
                    num_g[i]--;
                } else {
                    score = score;
                    num_p[i]--;
                }
            }
        }
        return score;
    }
}