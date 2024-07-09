import java.util.*;

public class atcoder_ABC142_C {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        List<Pair> A = new ArrayList<>();
        for (int i = 0; i < N; i++) {
            int x = scanner.nextInt();
            A.add(new Pair(i + 1, x));
        }
        Collections.sort(A, new SortByValue());
        List<Integer> A__ = new ArrayList<>();
        for (Pair pair : A) {
            A__.add(pair.getKey());
        }
        for (int i = 0; i < A__.size() - 1; i++) {
            System.out.print(A__.get(i) + " ");
        }
        System.out.println(A__.get(A__.size() - 1));
    }
    
    static class Pair {
        int key;
        int value;
        
        public Pair(int key, int value) {
            this.key = key;
            this.value = value;
        }
        
        public int getKey() {
            return key;
        }
        
        public int getValue() {
            return value;
        }
    }
    
    static class SortByValue implements Comparator<Pair> {
        public int compare(Pair a, Pair b) {
            return a.getValue() - b.getValue();
        }
    }
}