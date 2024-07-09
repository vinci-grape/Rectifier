import java.util.ArrayList;
import java.util.Scanner;

public class codeforces_474_B {
    public static void main(String[] args) {
        ArrayList<Integer> L = new ArrayList<>();
        Scanner scanner = new Scanner(System.in);

        scanner.nextInt();
        int r = 1;
        for (String k : scanner.nextLine().split(" ")) {
            int num = Integer.parseInt(k);
            for (int i = 0; i < num; i++) {
                L.add(r);
            }
            r++;
        }

        scanner.nextInt();
        for (String j : scanner.nextLine().split(" ")) {
            int index = Integer.parseInt(j) - 1;
            System.out.println(L.get(index));
        }
    }
}