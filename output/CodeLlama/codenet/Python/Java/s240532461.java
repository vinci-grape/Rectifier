import java.util.Scanner;

public class s240532461 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int L = sc.nextInt();
        int[] aji = new int[N];
        for (int i = 0; i < N; i++) {
            aji[i] = L + i - 1;
        }
        int min = aji[0];
        int max = aji[0];
        for (int i = 1; i < N; i++) {
            if (aji[i] < min) {
                min = aji[i];
            }
            if (aji[i] > max) {
                max = aji[i];
            }
        }
        if (min >= 0) {
            for (int i = 0; i < N; i++) {
                if (aji[i] == min) {
                    aji[i] = 0;
                }
            }
        } else if (max <= 0) {
            for (int i = 0; i < N; i++) {
                if (aji[i] == max) {
                    aji[i] = 0;
                }
            }
        } else {
            for (int i = 0; i < N; i++) {
                if (aji[i] == min) {
                    aji[i] = 0;
                }
            }
        }
        int sum = 0;
        for (int i = 0; i < N; i++) {
            sum += aji[i];
        }
        System.out.println(sum);
    }
}