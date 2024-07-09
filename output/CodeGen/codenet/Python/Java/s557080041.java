public class s557080041 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int N = in.nextInt();
        if (N == 0) {
            System.out.println("Yes");
        } else {
            String NStr = in.next();
            int[] NArr = new int[NStr.length()];
            for (int i = 0; i < NStr.length(); i++) {
                NArr[i] = NStr.charAt(i) - '0';
            }
            int X = 0;
            for (int i = 0; i < NArr.length; i++) {
                X += NArr[i];
            }
            if (X % 9 == 0) {
                System.out.println("Yes");
            } else {
                System.out.println("No");
            }
        }
    }
}