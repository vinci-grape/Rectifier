import java.util.*;
public class s182651529 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int K = sc.nextInt();
        int[] score = new int[N];
        for (int i = 0; i < N; i++) {
            score[i] = sc.nextInt();
        }
        int mae = 0;
        int usiro = K;
        for (int i = 0; i < N - K; i++) {
            if (score[mae] < score[usiro]) {
                System.out.println("Yes");
            } else {
                System.out.println("No");
            }
            mae++;
            usiro++;
        }
    }
}