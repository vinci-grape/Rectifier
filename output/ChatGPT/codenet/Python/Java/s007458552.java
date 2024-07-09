import java.util.Scanner;

public class s007458552 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        String S = scanner.next();
        int countR = 0;
        for (int i = 0; i < S.length(); i++) {
            if (S.charAt(i) == 'R') {
                countR++;
            }
        }
        if (countR > n - countR) {
            System.out.println("Yes");
        } else {
            System.out.println("No");
        }
    }
}