import java.util.Scanner;
import java.util.ArrayList;
import java.util.List;

public class s893778513 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        
        List<Integer> l = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            l.add(scanner.nextInt());
        }
        
        int b = Collections.max(l);
        int s = 0;
        for (int num : l) {
            s += num;
        }
        
        if (b < s - b) {
            System.out.println("Yes");
        } else {
            System.out.println("No");
        }
    }
}