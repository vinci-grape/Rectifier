import java.util.*;
import java.io.*;

public class codeforces_408_B {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = 1;
        for (int i = 0; i < t; i++) {
            solution(sc);
        }
    }

    public static void solution(Scanner sc) {
        String line = sc.nextLine();
        HashMap<Character, Integer> boughtCount = new HashMap<>();
        for (int i = 0; i < line.length(); i++) {
            char color = line.charAt(i);
            if (boughtCount.containsKey(color)) {
                boughtCount.put(color, boughtCount.get(color) + 1);
            } else {
                boughtCount.put(color, 1);
            }
        }

        line = sc.nextLine();
        HashMap<Character, Integer> madeCount = new HashMap<>();
        for (int i = 0; i < line.length(); i++) {
            char color = line.charAt(i);
            if (madeCount.containsKey(color)) {
                madeCount.put(color, madeCount.get(color) + 1);
            } else {
                madeCount.put(color, 1);
            }
        }

        int res = 0;
        for (char color : madeCount.keySet()) {
            if (!boughtCount.containsKey(color)) {
                System.out.println(-1);
                return;
            }
            res += Math.min(boughtCount.get(color), madeCount.get(color));
        }
        System.out.println(res);
    }
}