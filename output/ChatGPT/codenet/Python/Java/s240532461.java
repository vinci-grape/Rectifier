import java.util.Scanner;
import java.util.ArrayList;
import java.util.Collections;

public class s240532461 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        int L = scanner.nextInt();
        
        ArrayList<Integer> aji = new ArrayList<>();
        for (int i = 1; i <= N; i++) {
            aji.add(L + i - 1);
        }
        
        if (Collections.min(aji) >= 0) {
            aji.remove(aji.indexOf(Collections.min(aji)));
        } else if (Collections.max(aji) <= 0) {
            aji.remove(aji.indexOf(Collections.max(aji)));
        } else {
            aji.remove(aji.indexOf(Collections.min(aji, (a, b) -> Integer.compare(Math.abs(a), Math.abs(b)))));
        }
        
        int sum = 0;
        for (int num : aji) {
            sum += num;
        }
        
        System.out.println(sum);
    }
}