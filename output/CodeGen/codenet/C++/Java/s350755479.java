public class s350755479 {
    public int shortestPathLength(int[][] graph) {
        int n = graph.length;
        int[] par = new int[n];
        for (int i = 0; i < n; i++)
            par[i] = i;
        Arrays.sort(graph, 1, n, new Comparator<int[]>() {
            @Override
            public int compare(int[] a, int[] b) {
                return a[0] - b[0];
            }
        });
        for (int i = 1; i < n; i++)
            graph[i][1] = graph[i - 1][0] + graph[i][0];
        for (int i = 2; i < n; i++)
            graph[i][2] = graph[i - 1][1] + graph[i][0];
        for (int i = 3; i < n; i++)
            graph[i][3] = graph[i - 1][2] + graph[i][0];
        for (int i = 4; i < n; i++)
            graph[i][4] = graph[i - 1][3] + graph[i][0];
        for (int i = 5; i < n; i++)
            graph[i][5] = graph[i - 1][4] + graph[i][0];
        for (int i = 6; i < n; i++)
            graph[i][6] = graph[i - 1][5] + graph[i][0];
        for (int i = 7; i < n; i++)
            graph[i][7] = graph[i - 1][6] + graph[i][0];
        for (int i = 8; i < n; i++)
            graph[i][8] = graph[i - 1][7] + graph[i][0];
        for (int i = 9; i < n; i++)
            graph[i][9] = graph[i - 1][8] + graph[i][0];
        for (int i = 10; i < n; i++)
            graph[i][10] = graph[i - 1][9] + graph[i][0];
        for (int i = 11; i < n; i++)
            graph[i][11] = graph[i - 1][10] + graph[i][0];
        for (int i = 12; i < n; i++)
            graph[i][12] = graph[i - 1][11] + graph[i][0];
        for (int i = 13; i < n; i++)
            graph[i][13] = graph[i - 1][12] + graph[i][0];
        for (int i = 14; i < n; i++)
            graph[i][14] = graph[i - 1][13] + graph[i][0];
        for (int i = 15; i < n; i++)
            graph[i][15] = graph[i - 1][14] + graph[i][0];
        for (int i = 16; i < n; i++)
            graph[i][16] = graph[i - 1][15] + graph[i][0];
        for (int i = 17; i < n; i++)
            graph[i][17] = graph[i - 1][16] + graph[i][0];
        for (int i = 18; i < n; i++)
            graph[i][18] = graph[i - 1][17] + graph[i][0];
        for (int i = 19; i < n; i++)
            graph[i][19] = graph[i - 1][18] + graph[i][0];
        for (int i = 20; i < n; i++)
            graph[i][20] = graph[i - 1][19] + graph[i][0];
        for (int i = 21; i < n; i++)
            graph[i][21] = graph[i - 1][20] + graph[i][0];
        for (int i = 22; i < n; i++)
            graph[i][22] = graph[i - 1][21] + graph[i][0];
        for (int i = 23; i < n; i++)
            graph[i][23] = graph[i - 1][22] + graph[i][0];
        for (int i = 24; i < n; i++)
            graph[i][24] = graph[i - 1][23] + graph[i][0];
        for (int i = 25; i < n; i++)
            graph[i][25] = graph[i - 1][24] + graph[i][0];
        for (int i = 26; i < n; i++)
            graph[i][26] = graph[i - 1][25] + graph[i][0];
        for (int i = 27; i < n; i++)
            graph[i][27] = graph[i - 1][26] + graph[i][0];
        for (int i = 28; i < n; i++)
            graph[i][28] = graph[i - 1][27] + graph[i][0];
        for (int i = 29; i < n; i++)
            graph[i][29] = graph[i - 1][28] + graph[i][0];
        for (int i = 30; i < n; i++)
            graph[i][30] = graph[i - 1][29] + graph[i][0];
        for (int i = 31; i < n; i++)
            graph[i][31] = graph[i - 1][30] + graph[i