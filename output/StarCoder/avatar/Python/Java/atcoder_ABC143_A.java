import java.util.*;
public class atcoder_ABC143_A {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int A = in.nextInt();
        int B = in.nextInt();
        int ans = A - 2 * B;
        if (ans < 0)
            ans = 0;
        System.out.println(ans);
    }
}