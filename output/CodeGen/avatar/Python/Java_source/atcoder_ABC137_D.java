import java.util.Scanner;
import java.util.PriorityQueue;
import java.util.Queue;
import java.util.Comparator;
import java.util.List;
import java.util.ArrayList;
import java.util.Collections;

public class atcoder_ABC137_D {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int m = in.nextInt();
        List<Integer> x = new ArrayList<Integer>();
        List<Integer> y = new ArrayList<Integer>();
        for(int i = 0; i < n; i++) {
            int day = in.nextInt();
            int salary = in.nextInt();
            x.add(day);
            y.add(salary);
        }
        Collections.sort(x, new Comparator<Integer>() {
            @Override
            public int compare(Integer o1, Integer o2) {
                return o1 - o2;
            }
        });
        for(int i = 0; i < m; i++) {
            int d = in.nextInt();
            int s = in.nextInt();
            if(d > 0) {
                y.add(s);
            } else {
                y.remove(y.size() - 1);
            }
        }
        int sum = 0;
        for(int i = 0; i < y.size(); i++) {
            sum += y.get(i);
        }
        System.out.println(sum);
    }
}