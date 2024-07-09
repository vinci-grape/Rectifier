public class s807902500 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s = in.next();
        String t = in.next();
        s += s;
        int index = s.indexOf(t);
        if (index == -1) {
            System.out.println("No");
        } else {
            System.out.println(index + 1);
        }
    }
}