import java.util.Scanner;
import java.util.List;
import java.util.ArrayList;

public class codeforces_500_A {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int t = in.nextInt();
        List<Integer> s = new ArrayList<>();
        in.nextLine();
        String line = in.nextLine();
        String[] numbers = line.split(" ");
        for (int i = 0; i < numbers.length; i++) {
            s.add(Integer.parseInt(numbers[i]));
        }
        int current_cell = 0;
        while(current_cell <= t){
            current_cell += s.get((numbers.length + current_cell - 1) % numbers.length);
            if(current_cell == t){
                System.out.println("YES");
                System.exit(0);
            }
        }
        System.out.println("NO");
    }
}