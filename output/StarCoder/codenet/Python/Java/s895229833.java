import java.util.Scanner;

public class s895229833 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int[] H = new int[N];
        for (int i = 0; i < N; i++) {
            H[i] = sc.nextInt();
        }
        int count_best = 0, count_tmp = 0;
        for (int i = 0; i < N - 1; i++) {
            if (H[i] >= H[i + 1]) {
                count_tmp += 1;
            } else {
                if (count_tmp > count_best) {
                    count_best = count_tmp;
                }
                count_tmp = 0;
            }
        }
        if (count_tmp > count_best) {
            count_best = count_tmp;
        }
        System.out.println(count_best);
    }
}