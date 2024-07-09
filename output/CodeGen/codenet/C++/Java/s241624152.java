public class s241624152 {
    public static void main(String[] args) {
        int a, b;
        Scanner in = new Scanner(System.in);
        a = in.nextInt();
        b = in.nextInt();
        String ans = "";
        if (a == 1 || b == 1) {
            if (a == 1 && b == 1) {
                ans = "Draw";
            } else if (a == 1) {
                ans = "Alice";
            } else {
                ans = "Bob";
            }
        } else {
            if (a == b) {
                ans = "Draw";
            } else if (a > b) {
                ans = "Alice";
            } else {
                ans = "Bob";
            }
        }
        System.out.println(ans);
    }
}