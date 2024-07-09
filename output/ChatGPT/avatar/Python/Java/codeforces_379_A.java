import java.util.Scanner;

public class codeforces_379_A {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int candeleIntere = input.nextInt();
        int b = input.nextInt();
        int s = 0;
        int restoSciolte = 0;
        
        while (candeleIntere > 0 || restoSciolte >= b) {
            candeleIntere += restoSciolte / b;
            restoSciolte %= b;
            s += candeleIntere;
            restoSciolte += candeleIntere % b;
            candeleIntere /= b;
        }
        
        System.out.println(s);
    }
}