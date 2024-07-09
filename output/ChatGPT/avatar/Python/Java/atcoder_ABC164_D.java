import java.util.Scanner;

public class atcoder_ABC164_D {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String s = scanner.nextLine();
        int l = 2019;
        int[] m = new int[l];
        int a = 0;
        int r = 0;
        
        for (int i = 0; i < s.length(); i++) {
            char e = s.charAt(s.length() - 1 - i);
            a += Integer.parseInt(String.valueOf(e)) * pow(10, i, l);
            r += m[a % l];
            m[a % l]++;
        }
        
        System.out.println(r);
    }
    
    private static int pow(int base, int exponent, int modulus) {
        int result = 1;
        
        while (exponent > 0) {
            if (exponent % 2 == 1) {
                result = (result * base) % modulus;
            }
            
            base = (base * base) % modulus;
            exponent /= 2;
        }
        
        return result;
    }
}