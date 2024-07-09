import java.util.Scanner;

public class s798006876 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        final int MAX_N = (int)1e3;
        int[] data = new int[MAX_N];
        
        int m, nmi, nma;
        while (scanner.hasNextInt()) {
            m = scanner.nextInt();
            nmi = scanner.nextInt();
            nma = scanner.nextInt();
            if (nmi == 0) {
                break;
            }
            
            for (int i = 0; i < m; i++) {
                data[i] = scanner.nextInt();
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