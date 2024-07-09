import java.util.Scanner;
import java.util.HashSet;
import java.util.Set;

public class s770408311 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        Set<String> res = new HashSet<>();
        for (int i = 0; i < n; i++) {
            res.add(sc.next());
        }
        System.out.println(res.size());
    }
}