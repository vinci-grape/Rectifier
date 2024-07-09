import java.util.*;
public class s240532461 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int L = sc.nextInt();
        int[] aji = new int[N];
        for (int i = 0; i < N; i++) {
            aji[i] = L + i;
        }
        if (aji[0] >= 0) {
            aji[0] = 0;
        } else if (aji[N - 1] <= 0) {
            aji[N - 1] = 0;
        } else {
            aji[aji.length - 1] = 0;
        }
        int sum = 0;
        for (int i = 0; i < N; i++) {
            sum += aji[i];
        }
        System.out.println(sum);
    }
}