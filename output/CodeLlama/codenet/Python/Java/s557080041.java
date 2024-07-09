import java.util.Scanner;
public class s557080041 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        if (N == 0) {
            System.out.println("Yes");
        } else {
            String N_str = String.valueOf(N);
            char[] N_char = N_str.toCharArray();
            int[] N_int = new int[N_char.length];
            for (int i = 0; i < N_char.length; i++) {
                N_int[i] = Integer.parseInt(String.valueOf(N_char[i]));
            }
            int X = 0;
            for (int i = 0; i < N_int.length; i++) {
                X += N_int[i];
            }
            if (X % 9 == 0) {
                System.out.println("Yes");
            } else {
                System.out.println("No");
            }
        }
    }
}