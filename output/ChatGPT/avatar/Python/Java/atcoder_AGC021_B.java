import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.List;

public class atcoder_AGC021_B {
    public static void main(String[] args) {
        int N;
        List<Integer> XY = new ArrayList<>();
        List<Double> D;

        // Read input
        Scanner scanner = new Scanner(System.in);
        N = scanner.nextInt();
        for (int i = 0; i < 2 * N; i++) {
            XY.add(scanner.nextInt());
        }
        
        // Convert XY list to list of (x, y) tuples
        List<Pair<Integer, Integer>> points = new ArrayList<>();
        for (int i = 0; i < XY.size(); i += 2) {
            int x = XY.get(i);
            int y = XY.get(i + 1);
            points.add(new Pair<>(x, y));
        }
        
        // Calculate ans for each point
        for (int i = 0; i < N; i++) {
            int x = points.get(i).getKey();
            int y = points.get(i).getValue();
            
            D = new ArrayList<>();
            for (int j = 0; j < N; j++) {
                if (j != i) {
                    int X = points.get(j).getKey();
                    int Y = points.get(j).getValue();
                    double atan2Result = Math.atan2(X - x, Y - y);
                    D.add(atan2Result);
                }
            }
            
            D.sort(null);
            D.add(D.get(0) + 2 * Math.PI);
            
            double ans = 0;
            for (int j = 0; j < D.size() - 1; j++) {
                double a = D.get(j);
                double b = D.get(j + 1);
                if (b - a >= Math.PI) {
                    ans = (b - a) - Math.PI;
                }
            }
            
            System.out.println(ans / (2 * Math.PI));
        }
    }
}