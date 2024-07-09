import java.util.Scanner;
import java.util.ArrayList;
import java.util.Collections;

public class s735480710 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        scanner.nextLine();
        String[] a = scanner.nextLine().split(" ");
        ArrayList<String> b = new ArrayList<>();

        for (int i = 1; i < a.length; i += 2) {
            b.add(a[i]);
        }
        Collections.reverse(b);

        for (int i = 0; i < a.length; i += 2) {
            b.add(a[i]);
        }

        if (a.length % 2 == 0) {
            for (String num : b) {
                System.out.print(num + " ");
            }
        } else {
            Collections.reverse(b);
            for (String num : b) {
                System.out.print(num + " ");
            }
        }
    }
}