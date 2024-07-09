public class codeforces_272_B {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[] sequence = new int[n];
        for (int i = 0; i < n; i++) {
            sequence[i] = scanner.nextInt();
        }
        System.out.println(nPairsWithCommonFX(sequence));
    }

    public static int nPairsWithCommonFX(int[] sequence) {
        Map<Integer, List<Integer>> storage = new HashMap<>();
        List<Integer> FXs = new ArrayList<>();
        for (int value : sequence) {
            int y = f(value);
            if (!storage.containsKey(y)) {
                List<Integer> values = new ArrayList<>();
                values.add(value);
                storage.put(y, values);
                FXs.add(y);
            } else {
                storage.get(y).add(value);
            }
        }
        int count = 0;
        for (int y : FXs) {
            int size = storage.get(y).size();
            count += size * size;
        }
        count -= FXs.size();
        count /= 2;
        return count;
    }

    public static int f(int n) {
        int y = 1;
        while (n != 1) {
            if (n % 2 != 0) {
                y += 1;
            }
            n /= 2;
        }
        return y;
    }
}