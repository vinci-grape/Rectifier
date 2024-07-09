import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class codeforces_327_A {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        String s = scanner.next().replace("", "");
        if (!s.contains("0")) {
            System.out.println(n - 1);
        } else {
            List<Integer> indices = find(s, '0');
            if (indices.size() == 1) {
                System.out.println(n);
            } else {
                int maximum = 0;
                List<List<Integer>> combs = combinations(indices, 2);
                for (List<Integer> x : combs) {
                    maximum = Math.max(maximum, 2 + 2 * (Math.abs(indices.indexOf(x.get(0)) - indices.indexOf(x.get(1))) - 1) - (Math.abs(x.get(0) - x.get(1)) - 1));
                }
                System.out.println(s.length() - s.replaceAll("1", "").length() + maximum);
            }
        }
    }

    private static List<Integer> find(String s, char ch) {
        List<Integer> indices = new ArrayList<>();
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == ch) {
                indices.add(i);
            }
        }
        return indices;
    }

    private static List<List<Integer>> combinations(List<Integer> indices, int r) {
        List<List<Integer>> combs = new ArrayList<>();
        int[] indicesArray = indices.stream().mapToInt(i -> i).toArray();
        int n = indicesArray.length;
        int[] combination = new int[r];
        int index = 0;

        while (index >= 0) {
            if (combination[index] == n) {
                index--;
            } else {
                combination[index]++;
                if (index < r - 1) {
                    index++;
                    combination[index] = combination[index - 1];
                } else {
                    List<Integer> comb = new ArrayList<>();
                    for (int i = 0; i < r; i++) {
                        comb.add(indicesArray[combination[i]]);
                    }
                    combs.add(comb);
                }
            }
        }

        return combs;
    }
}