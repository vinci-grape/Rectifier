public class s275739084 {
    public static void main(String[] args) {
        int A, B;
        Scanner in = new Scanner(System.in);
        A = in.nextInt();
        B = in.nextInt();
        int C = A + B;
        if (A % 3!= 0 && B % 3!= 0 && C % 3!= 0) {
            System.out.println("Impossible");
        } else {
            System.out.println("Possible");
        }
    }
}