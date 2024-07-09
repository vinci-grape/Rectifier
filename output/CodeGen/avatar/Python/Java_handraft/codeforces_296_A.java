import java.util.*;

public class codeforces_296_A {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        String[] m = in.nextLine().split(" ");
        boolean possible = true;
        for (int i = 0; i < m.length; i++) {
            if (m.length - i >= n / 2.0 + 1) {
                possible = false;
                break;
            }
        }
        System.out.println(possible? "YES" : "NO");
    }
}