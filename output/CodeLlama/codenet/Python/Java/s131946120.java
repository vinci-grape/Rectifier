import java.util.Scanner;
import java.util.HashSet;
import java.util.Set;

public class s131946120 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        Set<String> set = new HashSet<>();
        for (int i = 0; i < n; i++) {
            set.add(sc.next());
        }
        System.out.println(set.size());
    }
}