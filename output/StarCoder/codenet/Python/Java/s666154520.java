import java.util.*;

public class s666154520 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for (int i = 1; i <= 100000; i++) {
            if (i * i > n) {
                System.out.println((i - 1) * (i - 1));
                return;
            }
        }
    }
}