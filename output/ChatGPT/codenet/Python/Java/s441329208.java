import java.util.Arrays;
import java.util.Scanner;

public class s441329208 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        String t = sc.nextLine();
        
        char[] sArr = s.toCharArray();
        char[] tArr = t.toCharArray();
        Arrays.sort(sArr);
        Arrays.sort(tArr);
        String sortedS = new String(sArr);
        String sortedT = new String(tArr);
        
        String result = sortedS.compareTo(sortedT) < 0 ? "Yes" : "No";
        System.out.println(result);
    }
}