public class s954770518 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int s[] = new int[10];
        for(int i = 0; i < 10; i++) {
            s[i] = in.nextInt();
        }
        sort(s, s + 10);
        for(int i = 9; i >= 6; i--) {
            System.out.println(s[i]);
        }
    }
}