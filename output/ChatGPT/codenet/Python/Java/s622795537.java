import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;
import java.util.ArrayList;
import java.util.Collections;

public class s622795537 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        scanner.nextLine();
        Map<String, Integer> arr = new HashMap<>();

        for (int i = 0; i < n; i++) {
            String s = scanner.nextLine();
            if (!arr.containsKey(s)) {
                arr.put(s, 1);
            } else {
                arr.put(s, arr.get(s) + 1);
            }
        }

        int maxCount = Collections.max(arr.values());
        ArrayList<String> dic = new ArrayList<>();
        for (Map.Entry<String, Integer> entry : arr.entrySet()) {
            if (entry.getValue() == maxCount) {
                dic.add(entry.getKey());
            }
        }

        Collections.sort(dic);
        for (String s : dic) {
            System.out.println(s);
        }
    }
}