import java.util.Arrays;
import java.util.Scanner;

public class s329154546 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int N = in.nextInt();
        int L = in.nextInt();
        String[] S = new String[N];
        for (int i = 0; i < N; i++) {
            S[i] = in.next();
        }
        Arrays.sort(S);
        for (int i = 0; i < N; i++) {
            System.out.print(S[i]);
        }
        System.out.println();
    }
}