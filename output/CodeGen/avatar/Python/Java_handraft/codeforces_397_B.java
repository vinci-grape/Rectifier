import java.util.*;

public class codeforces_397_B {
    public String[] readInput(Scanner scanner) {
        int t = Integer.parseInt(scanner.nextLine());
        String[] queries = new String[t];
        for (int i = 0; i < t; i++) {
            String[] line = scanner.nextLine().split(" ");
            int k = Integer.parseInt(line[0]) / Integer.parseInt(line[1]);
            int x = Integer.parseInt(line[2]);
            queries[i] = (k * x >= Integer.parseInt(line[0])? "Yes" : "No");
            System.out.println((k * x >= Integer.parseInt(line[0])? "Yes" : "No"));
        }
        return queries;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        codeforces_397_B solution = new codeforces_397_B();
        solution.readInput(scanner);
    }
}