public class codeforces_272_B {
    public static void main(String[] args) {
        System.out.println(nPairsWithCommonFX(getInput()));
    }
    public static int nPairsWithCommonFX(int[] sequence) {
        Map<Integer, List<Integer>> storage = new HashMap<>();
        List<Integer> FXs = new ArrayList<>();
        for (int value : sequence) {
            int y = f(value);
            if (!storage.containsKey(y)) {
                storage.put(y, new ArrayList<>());
                FXs.add(y);
            }
            storage.get(y).add(value);
        }
        return (int) (FXs.stream().mapToInt(y -> storage.get(y).size() * storage.get(y).size()).sum() - FXs.stream().mapToInt(y -> storage.get(y).size()).sum()) / 2;
    }
    public static int f(int n) {
        int y = 1;
        while (n != 1) {
            if (n % 2 != 0) {
                y++;
            }
            n /= 2;
        }
        return y;
    }
    public static int[] getInput() {
        Scanner scanner = new Scanner(System.in);
        String[] input = scanner.nextLine().split(" ");
        int[] sequence = new int[input.length];
        for (int i = 0; i < input.length; i++) {
            sequence[i] = Integer.parseInt(input[i]);
        }
        return sequence;
    }
}