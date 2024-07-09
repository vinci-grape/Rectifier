import java.util.*;
import java.io.*;

public class s329154546 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int L = sc.nextInt();
        int N = sc.nextInt();
        String[] S = new String[N];
        for(int i = 0; i < N; i++) {
            S[i] = sc.next();
        }
        Arrays.sort(S);
        for(int i = 0; i < N; i++) {
            System.out.print(S[i]);
        }
        System.out.println();
    }
}