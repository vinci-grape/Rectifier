import java.util.*;

public class s913338871 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int[] a = new int[N];
        for (int i = 0; i < N; i++) {
            a[i] = sc.nextInt();
        }
        Arrays.sort(a);
        int sum = 0;
        for (int i = N; i < 2 * N; i += 2) {
            sum += a[i];
        }
        System.out.println(sum);
    }
}