import java.util.*;

public class codeforces_651_A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        int y = sc.nextInt();
        System.out.println(Math.max(x + y - 3 + (((y - x) % 3 + 3) % 3 > 0 ? 1 : 0), 0));
    }
}