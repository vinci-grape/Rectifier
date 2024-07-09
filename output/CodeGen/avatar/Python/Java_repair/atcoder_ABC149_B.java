import java.util.*;

public class atcoder_ABC149_B {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int[] g = scanner.nextInt().split();
        int[] s = scanner.nextInt().split();
        int[] result = findContentChildren(g, s);
        System.out.println(result[0]);
        System.out.println(result[1]);
    }
    public static int[] findContentChildren(int[] g, int[] s) {
        int[] result = new int[2];
        int[] leftOver = new int[g.length];
        int[] takahashi = new int[g.length];
        int max = 0;
        for (int i = 0; i < g.length; i++) {
            leftOver[i] = g[i] - s[i];
            takahashi[i] = Math.max(0, leftOver[i]);
            max = Math.max(max, takahashi[i]);
        }
        result[0] = max;
        result[1] = (takahashi[0] > 0? 1 : 0);
        return result;
    }
}