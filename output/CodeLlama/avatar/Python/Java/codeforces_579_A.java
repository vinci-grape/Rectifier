import java.util.Scanner;
import java.lang.Math;
public class codeforces_579_A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int x = 1;
        System.out.println(Math.log(n)/Math.log(2));
        while(Math.log(n)/Math.log(2) % 1 != 0){
            x++;
            n -= Math.pow(2, (int)(Math.log(n)/Math.log(2)));
        }
        System.out.println(x);
    }
}