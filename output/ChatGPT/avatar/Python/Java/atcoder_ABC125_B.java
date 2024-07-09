import java.util.Scanner;

public class atcoder_ABC125_B {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int N = Integer.parseInt(scanner.nextLine());
        String[] V = scanner.nextLine().split(" ");
        int[] VInt = new int[N];
        for (int i = 0; i < N; i++) {
            VInt[i] = Integer.parseInt(V[i]);
        }

        String[] C = scanner.nextLine().split(" ");
        int[] CInt = new int[N];
        for (int i = 0; i < N; i++) {
            CInt[i] = Integer.parseInt(C[i]);
        }

        int[] list = new int[N + 1];
        int ans = 0;
        int X = 0;
        int Y = 0;
        for (int i = 0; i < N; i++) {
            if (VInt[i] - CInt[i] > 0) {
                X = VInt[i];
                Y = CInt[i];
                list[i + 1] = X - Y;
            }
        }

        int sum = 0;
        for (int i = 0; i < list.length; i++) {
            sum += list[i];
        }

        System.out.println(sum);
    }
}