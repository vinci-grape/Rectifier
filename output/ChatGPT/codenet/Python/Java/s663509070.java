import java.util.Scanner;
import java.util.ArrayList;
import java.util.List;
import java.lang.Math;

public class s663509070 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        int D = scanner.nextInt();
        List<List<Integer>> mat = new ArrayList<>();

        for (int d = 0; d < N; d++) {
            List<Integer> row = new ArrayList<>();
            for (int i = 0; i < D; i++) {
                row.add(scanner.nextInt());
            }
            mat.add(row);
        }

        int c = 0;
        for (int i = 0; i < mat.size() - 1; i++) {
            for (int j = i + 1; j < mat.size(); j++) {
                double dist = 0;
                for (int k = 0; k < D; k++) {
                    int x = mat.get(i).get(k);
                    int y = mat.get(j).get(k);
                    dist += Math.pow(x - y, 2);
                }
                dist = Math.sqrt(dist);
                if ((int) dist == dist) {
                    c++;
                }
            }
        }
        System.out.println(c);
    }
}