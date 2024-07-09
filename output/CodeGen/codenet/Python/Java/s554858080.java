public class s554858080 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String num = in.nextLine();
        if (num.length() % 4 == 0) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
    }
}