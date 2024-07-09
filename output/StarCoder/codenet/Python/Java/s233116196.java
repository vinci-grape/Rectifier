import java.util.*;

public class s233116196 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int M = sc.nextInt();
        Map<Integer, List<Integer>> G = new HashMap<>();
        for (int i = 0; i < N; i++) {
            G.put(i + 1, new ArrayList<>());
        }
        for (int i = 0; i < M; i++) {
            int a = sc.nextInt();
            int b = sc.nextInt();
            G.get(a).add(b);
            G.get(b).add(a);
        }
        int[] col = new int[N + 1];
        int cnt = 0;
        for (int i = 1; i <= N; i++) {
            if (col[i] == 0) {
                col[i] = cnt;
                Queue<Integer> que = new LinkedList<>();
                que.add(i);
                while (!que.isEmpty()) {
                    int x = que.poll();
                    for (int y : G.get(x)) {
                        if (col[y] == 0) {
                            col[y] = cnt;
                            que.add(y);
                        }
                    }
                }
                cnt++;
            }
        }
        System.out.println(Arrays.stream(col).max().getAsInt());
    }
}