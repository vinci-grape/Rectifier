import java.util.*;

public class codeforces_653_A {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        List<Integer> l = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            l.add(scanner.nextInt());
        }
        Collections.sort(l);
        boolean flag = false;
        for (int i : l) {
            if (l.contains(i + 1) && l.contains(i + 2)) {
                System.out.println("YES");
                flag = true;
                return;
            }
        }
        if (!flag) {
            System.out.println("NO");
        }
    }
}