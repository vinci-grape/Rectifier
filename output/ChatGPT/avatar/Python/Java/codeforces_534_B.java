import java.util.Scanner;

public class codeforces_534_B {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String[] vValues = scanner.nextLine().split(" ");
        String[] tValues = scanner.nextLine().split(" ");
        int v1 = Integer.parseInt(vValues[0]);
        int v2 = Integer.parseInt(vValues[1]);
        int t = Integer.parseInt(tValues[0]);
        int d = Integer.parseInt(tValues[1]);
        int a = 1;
        int v = v1;
        int distance = 0;
        for (int i = 0; i < t; i++) {
            if (v - v2 > (t - i - 1) * d) {
                a *= -1;
                v = (t - i - 1) * d + v2;
            }
            distance += v;
            v += a * d;
        }
        System.out.println(distance);
    }
}