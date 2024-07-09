import java.util.*;

public class s672953945 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        List<String> v = new ArrayList<>();

        int N = sc.nextInt();
        int L = sc.nextInt();
        sc.nextLine(); // consume the newline character after reading L

        for (int i = 0; i < N; i++) {
            String s = sc.nextLine();
            v.add(s);
        }

        Collections.sort(v);

        for (String s : v) {
            System.out.print(s);
        }
        System.out.println();
    }

}