import java.util.Scanner;

public class s930643405 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        boolean[] d = new boolean[10];
        for (int i = 0; i < k; i++) {
            int a = sc.nextInt();
            d[a] = true;
        }
        while (true) {
            int x = n;
            boolean hantei = true;
            while (x > 0) {
                if (d[x % 10]) {
                    hantei = false;
                    break;
                }
                x /= 10;
            }
            if (hantei) {
                System.out.println(n);
                break;
            }
            n++;
        }
    }
}