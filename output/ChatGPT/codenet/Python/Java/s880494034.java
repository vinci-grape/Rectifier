import java.util.Scanner;

public class s880494034 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int N = Integer.parseInt(scanner.nextLine());
        int[] XS = new int[N];
        String[] input = scanner.nextLine().split(" ");
        for (int i = 0; i < N; i++) {
            XS[i] = Integer.parseInt(input[i]);
        }

        int m = 999999999;
        for (int i = 1; i <= 100; i++) {
            int c = 0;
            for (int x : XS) {
                c += Math.pow((x - i), 2);
            }
            if (m > c) {
                m = c;
            }
        }

        System.out.println(m);
    }
}