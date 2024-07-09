import java.util.*;
public class atcoder_AGC007_C {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int d = sc.nextInt();
        int x = sc.nextInt();
        System.out.println(main(N, d, x));
    }

    public static int main(int N, int d, int x) {
        int ret = 0;
        while (N > 0) {
            ret += d + (N - 0.5) * x;
            d += d / N + (5 * x) / (2 * N);
            x += 2 * x / N;
            N--;
        }
        return ret;
    }
}