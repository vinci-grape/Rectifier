import java.util.*;
public class atcoder_ABC123_C {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[5];
        for (int i = 0; i < 5; i++) {
            a[i] = sc.nextInt();
        }
        System.out.println(Math.ceil(n / Math.min(a)) + 4);
    }
}