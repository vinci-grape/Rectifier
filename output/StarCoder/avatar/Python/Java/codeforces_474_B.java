import java.util.*;
public class codeforces_474_B {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        List<Integer> L = new ArrayList<Integer>();
        int r = 1;
        String[] input = sc.nextLine().split(" ");
        for (String k : input) {
            for (int i = 0; i < Integer.parseInt(k); i++) {
                L.add(r);
            }
            r++;
        }
        input = sc.nextLine().split(" ");
        for (String j : input) {
            System.out.println(L.get(Integer.parseInt(j) - 1));
        }
    }
}