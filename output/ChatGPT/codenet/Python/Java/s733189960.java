import java.util.HashMap;
import java.util.Scanner;

public class s733189960 {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = Integer.parseInt(scanner.nextLine());
        HashMap<String, Integer> sdic = new HashMap<String, Integer>();
        for (int i = 0; i < n; i++) {
            String s = scanner.nextLine().trim();
            char[] arr = s.toCharArray();
            Arrays.sort(arr);
            s = new String(arr);
            if (sdic.containsKey(s)) {
                sdic.put(s, sdic.get(s) + 1);
            } else {
                sdic.put(s, 1);
            }
        }
        int ans = 0;
        for (String k : sdic.keySet()) {
            int v = sdic.get(k);
            ans += v * (v - 1) / 2;
        }
        System.out.println(ans);
    }
}