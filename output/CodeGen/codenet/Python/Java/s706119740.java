public class s706119740 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int[] arr = new int[3];
        for (int i = 0; i < arr.length; i++) {
            arr[i] = in.nextInt();
        }
        Arrays.sort(arr);
        if (arr[0] + arr[1] == arr[2]) {
            System.out.println("Yes");
        } else {
            System.out.println("No");
        }
    }
}