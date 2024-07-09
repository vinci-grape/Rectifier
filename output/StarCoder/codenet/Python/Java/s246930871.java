import java.util.*;
public class s246930871 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int A = sc.nextInt();
        int B = sc.nextInt();
        int ans = A * (N/(A+B)) + Math.min(A, N%(A+B));
        System.out.println(ans);
    }
}