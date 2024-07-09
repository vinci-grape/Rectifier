public class s441329208 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = in.nextInt();
        }
        in.close();
        int[] sorted = arr.clone();
        Arrays.sort(sorted);
        int[] sorted2 = arr.clone();
        Arrays.sort(sorted2, Collections.reverseOrder());
        System.out.println(sorted.length < sorted2.length? "Yes" : "No");
    }
}