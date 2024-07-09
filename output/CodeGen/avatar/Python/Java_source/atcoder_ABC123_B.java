import java.util.Scanner;
import java.util.Arrays;

public class atcoder_ABC123_B {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int[] menu = new int[5];
        for (int i = 0; i < 5; i++) {
            menu[i] = in.nextInt();
        }
        menu = Arrays.stream(menu).sorted().toArray();
        int ans = 0;
        for (int i = 1; i < menu.length; i++) {
            ans += Math.ceil(menu[i] / 10) * 10;
        }
        ans += menu[0];
        System.out.println(ans + menu[0]);
    }
}