import java.util.*;
public class s538657784 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int sqN = (int) Math.sqrt(N);
        for (int i = 0; i < sqN; i++) {
            if (N % (sqN - i) == 0) {
                System.out.println(N / (sqN - i) + sqN - i - 2);
                break;
            }
        }
    }
}