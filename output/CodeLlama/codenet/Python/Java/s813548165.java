import java.util.Scanner;

public class s813548165 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        String S = sc.next();
        String T = sc.next();

        char[] char_lists = new char[N*2];

        for(int i=0;i<N;i++) {
            char_lists[i*2] = S.charAt(i);
            char_lists[i*2+1] = T.charAt(i);
        }

        System.out.println(new String(char_lists));
    }
}