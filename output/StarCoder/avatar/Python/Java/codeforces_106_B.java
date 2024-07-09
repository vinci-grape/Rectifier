import java.util.*;
public class codeforces_106_B {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        ArrayList<Integer> input_array = new ArrayList<Integer>();
        for (int i = 0; i < n; i++) {
            int S = sc.nextInt();
            int R = sc.nextInt();
            int H = sc.nextInt();
            int C = sc.nextInt();
            input_array.add(S);
            input_array.add(R);
            input_array.add(H);
            input_array.add(C);
        }
        ArrayList<Integer> outdated = new ArrayList<Integer>();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (input_array.get(i * 4) < input_array.get(j * 4) && input_array.get(i * 4 + 1) < input_array.get(j * 4 + 1) && input_array.get(i * 4 + 2) < input_array.get(j * 4 + 2)) {
                    outdated.add(input_array.get(i * 4 + 3));
                }
            }
        }
        Set<Integer> outdated_set = new HashSet<Integer>(outdated);
        int minimum_cost = 100000;
        int input_number = 0;
        for (int i = 0; i < n; i++) {
            int current_item = input_array.get(i * 4 + 3);
            int cost = current_item;
            if (!outdated_set.contains(current_item) && cost < minimum_cost) {
                minimum_cost = current_item;
                input_number = i + 1;
            }
        }
        System.out.println(input_number);
    }
}
