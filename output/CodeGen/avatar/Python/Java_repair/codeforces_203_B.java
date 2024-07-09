import java.util.*;

public class codeforces_203_B {
    public int[] findOrder(int numCourses, int[][] prerequisites) {
        int[] res = new int[numCourses];
        int[] inDegree = new int[numCourses];
        int[] outDegree = new int[numCourses];
        for (int i = 0; i < numCourses; i++) {
            inDegree[i] = 0;
            outDegree[i] = 0;
        }
        for (int i = 0; i < prerequisites.length; i++) {
            int src = prerequisites[i][0];
            int dst = prerequisites[i][1];
            inDegree[src]++;
            outDegree[dst]++;
        }
        boolean[] visited = new boolean[numCourses];
        for (int i = 0; i < numCourses; i++) {
            if (inDegree[i] == 0) {
                dfs(i, visited, inDegree, outDegree);
            }
        }
        for (int i = 0; i < numCourses; i++) {
            res[i] = visited[i]? i : -1;
        }
        return res;
    }
    private void dfs(int src, boolean[] visited, int[] inDegree, int[] outDegree) {
        visited[src] = true;
        for (int i = 0; i < outDegree[src]; i++) {
            int dst = prerequisites[i][1];
            if (!visited[dst]) {
                dfs(dst, visited, inDegree, outDegree);
            }
        }
    }
}