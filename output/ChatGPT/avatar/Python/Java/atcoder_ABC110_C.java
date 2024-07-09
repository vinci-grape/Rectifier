import java.util.Arrays;
import java.util.HashMap;
import java.util.Scanner;

public class atcoder_ABC110_C {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String s = scanner.nextLine();
        String t = scanner.nextLine();
        System.out.println(run(s, t));
    }
    
    public static String run(String s, String t) {
        HashMap<Character, Integer> sMap = new HashMap<>();
        HashMap<Character, Integer> tMap = new HashMap<>();
        
        for (char c : s.toCharArray()) {
            sMap.put(c, sMap.getOrDefault(c, 0) + 1);
        }
        
        for (char c : t.toCharArray()) {
            tMap.put(c, tMap.getOrDefault(c, 0) + 1);
        }
        
        Integer[] sValues = sMap.values().toArray(new Integer[0]);
        Integer[] tValues = tMap.values().toArray(new Integer[0]);
        Arrays.sort(sValues);
        Arrays.sort(tValues);
        
        if (Arrays.equals(sValues, tValues)) {
            return "Yes";
        } else {
            return "No";
        }
    }
}