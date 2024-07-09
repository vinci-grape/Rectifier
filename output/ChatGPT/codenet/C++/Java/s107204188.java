import java.util.Scanner;
import java.util.ArrayList;
import java.util.Collections;

public class s107204188 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int minA = (int) Math.pow(10, 9) + 1;
        int num = 0;
        
        int n, t, f = 0;
        n = scanner.nextInt();
        t = scanner.nextInt();
        ArrayList<Integer> A = new ArrayList<>();
        
        for (int i = 0; i < n; i++) {
            A.add(scanner.nextInt());
        }
        
        for (int i = 0; i < n; i++) {
            if (minA > A.get(i)) {
                minA = A.get(i);
            } else {
                if (f == A.get(i) - minA) {
                    num++;
                } else if (f < A.get(i) - minA) {
                    num = 1;
                    f = A.get(i) - minA;
                }
            }
        }
        
        System.out.println(num);
    }
}