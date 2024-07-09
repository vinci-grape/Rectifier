import java.util.Scanner;

public class s527973537 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String N = scanner.next();
        int S = 0;
        for (int i = 0; i < N.length(); i++) {
            S += N.charAt(i) - '0';
        }
        if (Integer.parseInt(N) % S == 0) {
            System.out.println("Yes");
        } else {
            System.out.println("No");
        }
        scanner.close();
    }
}