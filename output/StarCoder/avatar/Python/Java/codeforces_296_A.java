import java.util.Scanner;

public class codeforces_296_A {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String[] m = sc.next().split(" ");
        boolean possible = true;
        for (int i = 0; i < m.length; i++) {
            int count = 0;
            for (int j = 0; j < m.length; j++) {
                if (m[i].equals(m[j])) {
                    count++;
                }
            }
            if (count >= n / 2 + 1) {
                possible = false;
                break;
            }
        }
        System.out.println(possible? "YES" : "NO");
    }
}