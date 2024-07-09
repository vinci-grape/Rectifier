import java.util.*;

public class s267172486 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int h = sc.nextInt();
        int a = sc.nextInt();
        int ans = h / a;
        int ama = h % a;
        if (ama!= 0) {
            ans += 1;
        }
        System.out.println(ans);
    }
}