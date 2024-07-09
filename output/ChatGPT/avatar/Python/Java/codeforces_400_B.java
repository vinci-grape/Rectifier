import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

public class codeforces_400_B {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int m = scanner.nextInt();
        scanner.nextLine(); // Consume newline character

        Set<Integer> c = new HashSet<>();
        for (int i = 0; i < n; i++) {
            String s = scanner.nextLine();
            int indexS = s.indexOf("S");
            int indexG = s.indexOf("G");
            c.add(indexS - indexG);
        }

        boolean hasNegative = false;
        for (int a : c) {
            if (a < 0) {
                hasNegative = true;
                break;
            }
        }

        if (hasNegative) {
            System.out.println(-1);
        } else {
            System.out.println(c.size());
        }
    }
}