import java.util.Scanner;

public class codeforces_302_A {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int m = scanner.nextInt();
        scanner.nextLine();
        
        String saString = scanner.nextLine();
        int sa = saString.length() - saString.replace("-", "").length();
        sa = Math.min(n - sa, sa);
        
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < m; i++) {
            int a = scanner.nextInt();
            int b = scanner.nextInt();
            b -= a;
            sb.append((b % 2 == 1 && b <= sa * 2) ? "1\n" : "0\n");
        }
        
        System.out.print(sb.toString());
    }
}