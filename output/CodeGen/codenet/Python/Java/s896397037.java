public class s896397037 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String[] s = in.nextLine().split(" ");
        s = Arrays.stream(s).sorted().toArray(String[]::new);
        if (s[0].equals(s[1]) &&!s[0].equals(s[2]) && s[2].equals(s[3])) {
            System.out.println("Yes");
        } else {
            System.out.println("No");
        }
    }
}