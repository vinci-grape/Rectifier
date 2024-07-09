import java.util.*;

public class atcoder_ABC167_D {
    public int[] findOrder(int numCourses, int[][] prerequisites) {
        int[] res = new int[numCourses];
        int[] inDegree = new int[numCourses];
        int[] outDegree = new int[numCourses];
        int[] degree = new int[numCourses];
        int[] index = new int[numCourses];
        int[] count = new int[numCourses];
        int[] path = new int[numCourses];
        int[] loop = new int[numCourses];
        int[] t = new int[numCourses];
        boolean[] flag = new boolean[numCourses];
        int[] Hash = new int[numCourses];
        int[] ind = new int[numCourses];
        int[] x = new int[numCourses];
        boolean[] flag = new boolean[numCourses];
        int[]