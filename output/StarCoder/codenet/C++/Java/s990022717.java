import java.util.*;
public class s990022717 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int k = in.nextInt();
        int x = in.nextInt();
        int y = in.nextInt();
        int sum = 0;
        for (int i = 1; i <= n; i++) {
            if (i > k)
                sum += y;
            else
                sum += x;
        }
        System.out.println(sum);
    }
}