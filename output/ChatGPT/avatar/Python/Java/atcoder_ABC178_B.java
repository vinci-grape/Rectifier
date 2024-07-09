import java.util.*;

public class atcoder_ABC178_B {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();
        int d = sc.nextInt();
        int result = Math.max(a * c, Math.max(b * d, Math.max(a * d, b * c)));
        System.out.println(result);
    }
}