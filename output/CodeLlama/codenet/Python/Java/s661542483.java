import java.util.Scanner;

public class s661542483 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int h = sc.nextInt();
        int count = 0;
        dfs(h);
        System.out.println(count);
    }

    public static int dfs(int h) {
        if (h == 1) {
            return 1;
        }
        return dfs(h / 2) * 2 + 1;
    }
}