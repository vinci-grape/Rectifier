import java.util.Scanner;
public class codeforces_518_B {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        String t = sc.next();
        int yay = 0, whoops = 0;
        char[] sArray = s.toCharArray();
        char[] tArray = t.toCharArray();
        for (int i = 0; i < sArray.length; i++) {
            if (sArray[i] == tArray[i]) {
                yay++;
            } else {
                if (Character.isLowerCase(sArray[i]) && Character.isUpperCase(tArray[i])) {
                    whoops++;
                } else if (Character.isUpperCase(sArray[i]) && Character.isLowerCase(tArray[i])) {
                    whoops++;
                } else {
                    break;
                }
            }
        }
        System.out.println(yay + " " + whoops);
    }
}