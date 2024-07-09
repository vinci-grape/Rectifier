import java.util.Scanner;
import java.util.List;
import java.util.ArrayList;

public class codeforces_500_A {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int t = in.nextInt();
        List<Integer> s = new ArrayList<>();
        for(int s_i=0; s_i < n; s_i++){
            s.add(in.nextInt());
        }
        int current_cell = 0;
        while(current_cell <= t){
            current_cell += s.get(current_cell - 1);
            if(current_cell == t){
                System.out.println("YES");
                System.exit(0);
            }
        }
        System.out.println("NO");
    }
}