import java.util.Scanner;
public class codeforces_131_B {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] w = new int[n];
        for (int i = 0; i < n; i++) {
            w[i] = sc.nextInt();
        }
        int c = 0;
        for (int i = 0; i < n; i++) {
            if (w[i] == 0) {
                c += w[i] * (w[i] - 1);
            } else {
                if (-w[i] == w[i]) {
                    c += w[i] * w[i];
                } else {
                    if (-w[i] < w[i]) {
                        c += w[i] * (w[i] - 1);
                    } else {
                        c += w[i] * (w[i] - 1) + w[i] * w[i];
                    }
                }
            }
        }
        System.out.println(c / 2);
    }
}