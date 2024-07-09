import java.util.HashMap;
import java.util.Scanner;

public class atcoder_ABC124_C {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String s = input.nextLine();
        char[] sArr = s.toCharArray();
        
        HashMap<Character, Integer> even = new HashMap<>();
        HashMap<Character, Integer> odd = new HashMap<>();
        
        for (int i = 0; i < sArr.length; i++) {
            if (i % 2 == 0) {
                even.put(sArr[i], even.getOrDefault(sArr[i], 0) + 1);
            } else {
                odd.put(sArr[i], odd.getOrDefault(sArr[i], 0) + 1);
            }
        }
        
        int count = Math.min(sArr.length - (even.getOrDefault('0', 0) + odd.getOrDefault('1', 0)),
                sArr.length - (even.getOrDefault('1', 0) + odd.getOrDefault('0', 0)));
        
        System.out.println(count);
    }
}