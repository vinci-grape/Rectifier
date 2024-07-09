import java.util.*;

public class s043545989 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }
        Map<Integer, Integer> map = new HashMap<>();
        for (int i = 0; i < n; i++) {
            if (map.containsKey(a[i])) {
                map.put(a[i], map.get(a[i]) + 1);
            } else {
                map.put(a[i], 1);
            }
        }
        if (map.size() == 3) {
            int[] key = map.keySet().toArray(new int[3]);
            int[] val = map.values().toArray(new int[3]);
            if (key[0] == key[1] ^ key[2] && val[0] == val[1] && val[1] == val[2]) {
                System.out.println("Yes");
            } else {
                System.out.println("No");
            }
        } else if (map.size() == 2) {
            int[] key = map.keySet().toArray(new int[2]);
            int[] val = map.values().toArray(new int[2]);
            if (key[0] == 0 && (val[0] == 2 * val[1] || val[1] == 2 * val[0])) {
                System.out.println("Yes");
            } else {
                System.out.println("No");
            }
        } else if (map.size() == 1) {
            if (map.containsKey(0)) {
                System.out.println("Yes");
            } else {
                System.out.println("No");
            }
        } else {
            System.out.println("No");
        }
    }
}