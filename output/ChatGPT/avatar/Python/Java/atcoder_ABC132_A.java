import java.util.*;

public class atcoder_ABC132_A {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String S = scanner.nextLine();
        Map<Character, Integer> counter = new HashMap<>();
        Set<Character> Sa = new HashSet<>();

        for (char c : S.toCharArray()) {
            counter.put(c, counter.getOrDefault(c, 0) + 1);
            Sa.add(c);
        }

        if (Sa.size() != 2) {
            System.out.println("No");
            System.exit(0);
        }

        for (char c : Sa) {
            if (counter.get(c) != 2) {
                System.out.println("No");
                System.exit(0);
            }
        }

        System.out.println("Yes");
    }
}