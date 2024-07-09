public class atcoder_ABC126_E {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int m = in.nextInt();
        int[][] edge = new int[n][];
        for (int i = 0; i < m; i++) {
            int x = in.nextInt() - 1;
            int y = in.nextInt() - 1;
            int z = in.nextInt() - 1;
            edge[x] = Arrays.copyOf(edge[x], edge[x].length + 1);
            edge[x][edge[x].length - 1] = y;
            edge[y] = Arrays.copyOf(edge[y], edge[y].length + 1);
            edge[y][edge[y].length - 1] = x;
        }
        int ans = 0;
        boolean[] used = new boolean[n];
        for (int i = 0; i < n; i++) {
            if (!used[i]) {
                ans++;
                Queue<Integer> queue = new LinkedList<>();
                queue.add(i);
                while (!queue.isEmpty()) {
                    int node = queue.poll();
                    used[node] = true;
                    for (int nextnode : edge[node]) {
                        if (!used[nextnode]) {
                            queue.add(nextnode);
                        }
                    }
                }
            }
        }
        System.out.println(ans);
    }
}