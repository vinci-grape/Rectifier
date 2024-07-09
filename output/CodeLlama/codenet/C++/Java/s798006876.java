import java.util.Scanner;

public class s798006876 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while (sc.hasNext()) {
            int m = sc.nextInt();
            int nmi = sc.nextInt();
            int nma = sc.nextInt();
            int[] data = new int[m];
            for (int i = 0; i < m; i++) {
                data[i] = sc.nextInt();
            }
            int ma = 0;
            int ans = 0;
            for (int i = nmi - 1; i < nma; i++) {
                if (ma <= data[i] - data[i + 1]) {
                    ans = i + 1;
                    ma = data[i] - data[i + 1];
                }
            }
            System.out.println(ans);
        }
    }
}