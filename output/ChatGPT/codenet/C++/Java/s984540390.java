import java.util.Scanner;

public class s984540390 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        long h = scanner.nextLong();
        long ans = 0, cnt = 1;
        while (h != 1) {
            if (h % 2 != 0) {
                h--;
            }
            h /= 2;
            cnt *= 2;
            ans += cnt;
        }
        System.out.println(ans + 1);
    }
}