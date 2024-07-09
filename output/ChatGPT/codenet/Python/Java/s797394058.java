import java.util.*;

public class s797394058 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        int x = 1;

        List<Integer> N_list = new ArrayList<>();
        for (int i = 0; i < N; i++) {
            N_list.add(x + 1);
        }

        List<List<Integer>> n = new ArrayList<>();
        for (int i = 0; i < N_list.size(); i++) {
            for (int j = 0; j < N_list.size(); j++) {
                for (int k = 0; k < N_list.size(); k++) {
                    List<Integer> triplet = new ArrayList<>();
                    triplet.add(N_list.get(i));
                    triplet.add(N_list.get(j));
                    triplet.add(N_list.get(k));
                    n.add(triplet);
                }
            }
        }

        int m = n.size();
        System.out.println(m);
    }
}