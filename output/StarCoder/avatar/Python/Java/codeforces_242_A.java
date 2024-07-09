import java.util.*;
public class codeforces_242_A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        int y = sc.nextInt();
        int a = sc.nextInt();
        int b = sc.nextInt();
        List<int[]> games = new ArrayList<int[]>();
        for (int i = a; i <= x; i++) {
            if (i <= b) continue;
            for (int j = b; j <= y; j++) {
                if (i > j) games.add(new int[]{i, j});
            }
        }
        System.out.println(games.size());
        for (int[] game : games) {
            System.out.println(game[0] + " " + game[1]);
        }
    }
}

