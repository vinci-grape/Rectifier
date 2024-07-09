public class s142939923 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int a = in.nextInt();
        int b = in.nextInt();
        int[] arr = {a + b, a - b, a * b};
        System.out.println(arr[arr.length - 1]);
    }
}