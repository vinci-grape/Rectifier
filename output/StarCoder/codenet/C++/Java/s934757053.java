import java.util.*;
public class s934757053 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int A = sc.nextInt();
        int B = sc.nextInt();
        int out = 1;
        int ans = 0;
        while (out < B) {
            out -= A;
            out += A;
            ans++;
        }
        System.out.println(ans);
    }
}