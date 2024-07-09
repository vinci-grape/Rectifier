import java.util.Scanner;
import java.util.ArrayList;

public class s983388294 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();

        ArrayList<Integer> a = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            a.add(scanner.nextInt());
        }

        int curr = 0;
        for (int i = 0; i < n; i++) {
            if (a.get(i) == curr + 1)
                curr++;
        }
        if (curr > 0) {
            System.out.println(n - curr);
        } else {
            System.out.println("-1");
        }
    }
}