import java.util.*;

public class s668439281 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        input.nextLine();

        List<String> ls = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            ls.add(input.nextLine());
        }

        Map<String, Integer> counter = new HashMap<>();
        for (String s : ls) {
            counter.put(s, counter.getOrDefault(s, 0) + 1);
        }

        int count = 0;
        List<String> ans = new ArrayList<>();
        for (Map.Entry<String, Integer> entry : counter.entrySet()) {
            if (entry.getValue() > count) {
                count = entry.getValue();
                ans.clear();
                ans.add(entry.getKey());
            } else if (entry.getValue() == count) {
                ans.add(entry.getKey());
            }
        }

        Collections.sort(ans);
        for (String s : ans) {
            System.out.println(s);
        }
    }
}