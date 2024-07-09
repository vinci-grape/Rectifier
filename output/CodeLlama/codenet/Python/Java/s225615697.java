import java.util.Scanner;

public class s225615697 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }

        int m1 = (int) (sum(a) / 2);
        String result = String.valueOf(m1);
        int[] m = new int[n];
        m[0] = m1;
        for (int i = 1; i < n; i++) {
            m[i] = a[i - 1] - m[i - 1];
        }
        for (int i = 0; i < n; i++) {
            System.out.print(m[i] * 2 + " ");
        }
    }

    public static int sum(int[] a) {
        int sum = 0;
        for (int i = 0; i < a.length; i++) {
            sum += a[i] * ((-1) ^ i);
        }
        return sum;
    }
}