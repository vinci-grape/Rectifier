import java.util.*;

public class codeforces_37_A {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = Integer.parseInt(scanner.next());
        System.out.println(maxTower(n));
    }
    public static int maxTower(int n) {
        String[] inputs = scanner.nextLine().split(" ");
        for (int i = 0; i < inputs.length; i++) {
            Integer integer = Integer.parseInt(inputs[i]);
            n = n * integer.intValue();
        }
        System.out.println(n);
        return n;
    }
}