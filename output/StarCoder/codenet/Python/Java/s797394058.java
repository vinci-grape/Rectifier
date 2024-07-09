import java.util.Scanner;

public class s797394058 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int x = 1;

        int[] N_list = new int[N];

        for (int i = 0; i < N; i++) {
            N_list[i] = x + 1;
            x++;
        }

        int[][] n = new int[N_list.length][N_list.length];

        int m = 1;

        for (int i = 0; i < N_list.length; i++) {
            for (int j = 0; j < N_list.length; j++) {
                n[i][j] = m;
                m++;
            }
        }

        System.out.println(m);
    }
}