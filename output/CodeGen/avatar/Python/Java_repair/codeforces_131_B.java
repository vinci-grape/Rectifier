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
        List<Integer> list = new ArrayList<Integer>();
        for(int w_i=0; w_i < n; w_i++){
            int w_item = in.nextInt();
            int w_count = in.nextInt();
            list.add(w_item * w_count);
        }
        int c = 0;
        for(Integer key : list.keySet()){
            if(key == 0){
                c += list.get(key) * (list.get(key) - 1);
            } else {
                if(list.containsKey(-key)){
                    c += list.get(key) * list.get(-key);
                }
            }
        }
        System.out.println(c / 2);
    }
}