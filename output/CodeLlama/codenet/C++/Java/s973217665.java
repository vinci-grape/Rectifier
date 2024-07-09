import java.util.Scanner;
 
public class s973217665 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        while (n-- > 0) {
            int p = in.nextInt();
            int q = in.nextInt();
            int l = (int) Math.sqrt(p * p + q * q);
            boolean isprime = true;
            for (int i = 0; i < l; i++) {
                for (int j = 0; j < l; j++) {
                    int x = i * i + j * j;
                    if (x <= 1 || x >= p * p + q * q) continue;
                    if ((i * p + j * q) % x == 0 && (i * q - j * p) % x == 0) isprime = false;
                }
            }
            System.out.println(isprime ? "P" : "C");
        }
    }
}