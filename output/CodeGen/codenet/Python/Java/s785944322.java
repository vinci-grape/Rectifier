public class s785944322 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int a = in.nextInt();
        int b = in.nextInt();
        if (a >= 13) {
            System.out.println(b);
        } else if (a >= 6) {
            System.out.println(b / 2);
        } else {
            System.out.println(0);
        }
    }
}