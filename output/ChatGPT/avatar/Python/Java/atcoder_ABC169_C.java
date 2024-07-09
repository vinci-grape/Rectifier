public class atcoder_ABC169_C {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        double b = sc.nextDouble();
        int result = (int) (a * (b * 100 + 0.1) / 100);
        System.out.println(result);
    }
}