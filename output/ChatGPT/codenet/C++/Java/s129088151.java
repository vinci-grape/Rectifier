import java.util.HashMap;
import java.util.Scanner;

public class s129088151 {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        scanner.nextLine();

        HashMap<String, Boolean> T = new HashMap<>();

        for (int i = 0; i < n; i++) {
            String[] input = scanner.nextLine().split(" ");
            String com = input[0];
            String str = input[1];
            if (com.equals("i")) {
                T.put(str, true);
            } else {
                if (T.containsKey(str)) {
                    System.out.println("yes");
                } else {
                    System.out.println("no");
                }
            }
        }
        scanner.close();
    }
}