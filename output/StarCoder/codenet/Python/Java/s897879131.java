import java.util.*;

public class s897879131 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int R, G, B, N;
        R = sc.nextInt();
        G = sc.nextInt();
        B = sc.nextInt();
        N = sc.nextInt();
        int score = 0;
        for (int i = 0; i <= N / R; i++) {
            for (int j = 0; j <= (N - i * R) / G; j++) {
                if ((N - i * R - j * G) % B == 0) {
                    score++;
                }
            }
        }
        System.out.println(score);
    }
}