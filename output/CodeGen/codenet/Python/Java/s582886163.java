public class s582886163 {
    public int findBottles(int[] bottles) {
        int[] capacity = new int[5];
        for (int i = 0; i < bottles.length; i++) {
            capacity[i] = bottles[i];
        }
        Arrays.sort(capacity);
        int bottle_neck = capacity[0];
        return 4 + (N + bottle_neck - 1) / bottle_neck;
    }
}