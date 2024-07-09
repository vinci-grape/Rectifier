import java.util.Scanner;
import java.util.ArrayList;
import java.util.List;

public class atcoder_ABC145_C {
    
    public static void solve(int N, List<Integer> x, List<Integer> y) {
        List<List<Integer>> permutations = new ArrayList<>();
        generatePermutations(x.size(), new ArrayList<>(), x, y, permutations);
        
        List<Double> distances = new ArrayList<>();
        for (List<Integer> permutation : permutations) {
            double totalDistance = 0;
            for (int i = 0; i < N - 1; i++) {
                int f = permutation.get(i);
                int t = permutation.get(i + 1);
                double distance = Math.sqrt(Math.pow((x.get(t) - x.get(f)), 2) + Math.pow((y.get(t) - y.get(f)), 2));
                totalDistance += distance;
            }
            distances.add(totalDistance);
        }
        
        double result = calculateAverage(distances);
        System.out.println(result);
    }
    
    private static void generatePermutations(int N, List<Integer> permutation, List<Integer> x, List<Integer> y, List<List<Integer>> permutations) {
        if (permutation.size() == N) {
            permutations.add(new ArrayList<>(permutation));
        } else {
            for (int i = 0; i < N; i++) {
                if (!permutation.contains(i)) {
                    permutation.add(i);
                    generatePermutations(N, permutation, x, y, permutations);
                    permutation.remove(permutation.size() - 1);
                }
            }
        }
    }
    
    private static double calculateAverage(List<Double> distances) {
        double sum = 0;
        for (double distance : distances) {
            sum += distance;
        }
        return sum / distances.size();
    }
    
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        List<Integer> x = new ArrayList<>();
        List<Integer> y = new ArrayList<>();
        for (int i = 0; i < N; i++) {
            x.add(scanner.nextInt());
            y.add(scanner.nextInt());
        }
        solve(N, x, y);
    }
}