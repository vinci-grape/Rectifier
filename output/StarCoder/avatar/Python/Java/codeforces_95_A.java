import java.util.*;
public class codeforces_95_A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String[] arr = new String[n];
        for(int i = 0; i < n; i++) {
            arr[i] = sc.next();
        }
        String s = sc.next();
        char c1 = sc.next().charAt(0);
        char c2 = c1 == 'a'? 'b' : 'a';
        char[] arr2 = s.toCharArray();
        for(int i = 0; i < arr2.length; i++) {
            if(arr2[i] == c1 || arr2[i] == c2) {
                arr2[i] = arr2[i] == c1? c2 : c1;
            }
        }
        for(char c : arr2) {
            System.out.print(c);
        }
    }
}