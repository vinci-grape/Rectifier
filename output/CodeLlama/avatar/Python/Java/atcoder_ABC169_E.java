import java.util.Scanner;

public class atcoder_ABC169_E {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] low = new int[n];
        int[] high = new int[n];
        for (int i = 0; i < n; i++) {
            int a = sc.nextInt();
            int b = sc.nextInt();
            low[i] = a;
            high[i] = b;
        }
        java.util.Arrays.sort(low);
        java.util.Arrays.sort(high);
        if (n % 2 == 1) {
            System.out.println(high[(n + 1) / 2 - 1] - low[(n + 1) / 2 - 1] + 1);
        } else {
            int hh = (high[(n) / 2 - 1] + high[(n) / 2]) / 2;
            int ll = (low[(n) / 2 - 1] + low[(n) / 2]) / 2;
            System.out.println(Math.round((hh - ll) * 2) + 1);
        }
    }
}