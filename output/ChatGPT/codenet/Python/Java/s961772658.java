import java.util.Scanner;

public class s961772658 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String s = scanner.nextLine();
        
        char[] alphabets = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
        
        for (int i = 0; i < alphabets.length; i++) {
            if (alphabets[i] == s.charAt(0)) {
                System.out.println(alphabets[i + 1]);
                break;
            }
        }
    }
}