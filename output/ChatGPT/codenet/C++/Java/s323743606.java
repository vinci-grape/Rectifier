import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class s323743606 {
    public static void main(String[] args) {
        Map<Integer, Integer> m = new HashMap<>();
        for (int i = 0; i * 200 < 5001; i++) {
            for (int j = 0; j * 300 < 5001; j++) {
                for (int k = 0; k * 500 < 5001; k++) {
                    int w = i * 200 + j * 300 + k * 500;
                    int p = i / 5 * 5 * 380 * 80 / 100 + i % 5 * 380
                            + j / 4 * 4 * 550 * 85 / 100 + j % 4 * 550
                            + k / 3 * 3 * 850 * 88 / 100 + k % 3 * 850;
                    if (m.containsKey(w)) {
                        m.put(w, Math.min(m.get(w), p));
                    } else {
                        m.put(w, p);
                    }
                }
            }
        }
        Scanner sc = new Scanner(System.in);
        int n;
        while ((n = sc.nextInt()) != 0) {
            System.out.println(m.get(n));
        }
    }
}