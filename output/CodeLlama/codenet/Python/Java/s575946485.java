import java.util.Scanner;

public class s575946485 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] a = new int[5];
        for (int i = 0; i < 5; i++) {
            a[i] = sc.nextInt();
        }
        int[] b = new int[5];
        for (int i = 0; i < 5; i++) {
            if (a[i] % 10 == 0) {
                b[i] = 0;
            } else {
                b[i] = a[i] % 10 - 10;
            }
        }
        int min = b[0];
        for (int i = 1; i < 5; i++) {
            if (b[i] < min) {
                min = b[i];
            }
        }
        int sum = 0;
        for (int i = 0; i < 5; i++) {
            if (i != b.indexOf(min)) {
                sum += b[i];
            }
        }
        System.out.println(Math.abs(sum) + a[b.indexOf(min)]);
    }
}