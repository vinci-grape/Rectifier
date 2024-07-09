import java.util.*;
public class s977408144 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int l = sc.nextInt();
        String[] S = new String[n];
        for (int i = 0; i < n; i++) {
            S[i] = sc.next();
        }
        Arrays.sort(S);
        for (int i = 0; i < n; i++) {
            System.out.print(S[i]);
        }
    }
}