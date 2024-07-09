import java.util.Scanner;

public class codeforces_134_A {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] w = new int[n];
        for (int i = 0; i < n; i++) {
            w[i] = sc.nextInt();
        }
        int x = 0;
        for (int i = 0; i < n; i++) {
            x += w[i];
        }
        int[] d = new int[n];
        int index = 0;
        for (int i = 0; i < n; i++) {
            if ((x - w[i]) / (n - 1) == w[i]) {
                d[index] = i + 1;
                index++;
            }
        }
        System.out.println(index);
        for (int i = 0; i < index; i++) {
            System.out.print(d[i] + " ");
        }
    }
}