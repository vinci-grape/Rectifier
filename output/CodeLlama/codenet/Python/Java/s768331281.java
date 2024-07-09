import java.util.Scanner;

public class s768331281 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int L = sc.nextInt();
        String[] S = new String[N];
        for (int i = 0; i < N; i++) {
            S[i] = sc.next();
        }
        for (int i = 0; i < N; i++) {
            System.out.print(S[i]);
        }
    }
}