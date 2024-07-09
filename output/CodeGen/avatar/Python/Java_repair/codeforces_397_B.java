import java.util.*;

public class codeforces_397_B {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        String[] input = sc.nextLine().split(" ");
        int t = Integer.parseInt(input[0]);
        String[] queries = new String[t];
        for (int i = 0; i < t; i++) {
            String[] line = input[i].split(" ");
            int k = Integer.parseInt(line[0]) / Integer.parseInt(line[1]);
            int x = Integer.parseInt(line[2]);
            queries[i] = (k * x >= Integer.parseInt(line[0])? "Yes" : "No");
        }
        System.out.println(java.util.Arrays.toString(queries));
    }
}