import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Scanner;

public class s814403222 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n;
        while ((n = scanner.nextInt()) != 0) {
            Map<String, Integer> map = new HashMap<>();
            List<Pair> v = new ArrayList<>();
            List<List<Integer>> d = new ArrayList<>();
            for (int i = 0; i < 33; i++) {
                d.add(new ArrayList<>());
            }
            for (int i = 0; i < n; i++) {
                v.add(new Pair());
                v.get(i).first = 0;
                v.get(i).second = scanner.next();
                int m = scanner.nextInt();
                for (int j = 0; j < m; j++) {
                    int a = scanner.nextInt();
                    v.get(i).first += n - d.get(a).size();
                    for (int k = 0; k < d.get(a).size(); k++) {
                        v.get(d.get(a).get(k)).first--;
                    }
                    d.get(a).add(i);
                }
            }
            Collections.sort(v);
            System.out.println(v.get(0).first + " " + v.get(0).second);
        }
    }

    static class Pair implements Comparable<Pair> {
        int first;
        String second;

        @Override
        public int compareTo(Pair other) {
            if (this.first != other.first) {
                return this.first - other.first;
            } else {
                return this.second.compareTo(other.second);
            }
        }
    }
}