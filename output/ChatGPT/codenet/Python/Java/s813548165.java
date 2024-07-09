// Java code to achieve the same functionality as the Python code

import java.util.Scanner;

public class s813548165 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int N = scanner.nextInt();
        String S = scanner.next();
        String T = scanner.next();
        
        StringBuilder charLists = new StringBuilder();
        
        for (int i = 0; i < N; i++) {
            charLists.append(S.charAt(i));
            charLists.append(T.charAt(i));
        }
        
        System.out.println(charLists.toString());
    }
}