public class s876796799 {
    public int[] findOrder(int numCourses, int[][] prerequisites) {
        int[] ind_a = new int[numCourses];
        for (int i = 0; i < numCourses; i++) {
            ind_a[i] = i;
        }
        int N = numCourses;
        for (int i = 0; i < prerequisites.length; i++) {
            int x = ind_a[prerequisites[i][0] - 1];
            int y = ind_a[prerequisites[i][1] - 1];
            ind_a[x] = Math.min(ind_a[x], Math.min(ind_a[y], y));
        }
        int[] ans = new int[N];
        for (int i = 0; i < N; i++) {
            ans[ind_a[i] - 1] = i + 1;
        }
        return ans;
    }
}