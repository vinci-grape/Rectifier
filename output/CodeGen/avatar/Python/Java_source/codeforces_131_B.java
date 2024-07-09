import java.util.Scanner;
import java.util.Map;
import java.util.HashMap;
import java.util.List;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;

public class codeforces_131_B {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        Map<Integer, Integer> w = new HashMap<Integer, Integer>();
        for(int w_i=0; w_i < n; w_i++){
            int w_item = in.nextInt();
            int w_count = in.nextInt();
            w.put(w_item, w_count);
        }
        int c = 0;
        for(Integer key : w.keySet()){
            if(key == 0){
                c += w.get(key) * (w.get(key) - 1);
            } else {
                if(w.containsKey(-key)){
                    c += w.get(key) * w.get(-key);
                }
            }
        }
        System.out.println(c / 2);
    }
}