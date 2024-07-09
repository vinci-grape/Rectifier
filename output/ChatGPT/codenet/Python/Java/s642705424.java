import java.util.Scanner;

public class s642705424 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int N = scanner.nextInt();
        String S = scanner.next();

        int x = 1;
        for (int i = 0; i < N-1; i++) {
            if (S.charAt(i) != S.charAt(i+1)) {
                x = x + 1;
            }
        }

        System.out.println(x);
    }
}