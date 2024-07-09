import java.util.Scanner;
import java.util.ArrayList;

public class s978355948 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        int X = scanner.nextInt();
        ArrayList<Integer> L = new ArrayList<>();
        for (int i = 0; i < N; i++) {
            L.add(scanner.nextInt());
        }

        int i;
        int d = 0;
        for (i = 0; i < N; i++) {
            d = d + L.get(i);
            if (d > X)
                break;
        }

        System.out.println(i + 1);
    }
}