import java.util.Scanner;
import java.util.ArrayList;
import java.util.Collections;

public class s384319383 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        ArrayList<Integer> cnt = new ArrayList<>(Collections.nCopies(26, 1));
        ArrayList<Character> s = new ArrayList<>();

        for (int i = 0; i < n; i++) {
            char c = scanner.next().charAt(0);
            s.add(c);
            cnt.set(c - 'a', cnt.get(c - 'a') + 1);
        }

        long ans = cnt.get(0);
        for (int i = 1; i < 26; i++) {
            ans *= cnt.get(i);
            ans %= (int) 1e9 + 7;
        }

        System.out.println(ans - 1);
    }
}