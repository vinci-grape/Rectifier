public class s043174379 {
    public int minAreaFreeRect(int[][] points) {
        int H = points.length;
        int W = points[0].length;
        int h = 0;
        int w = 0;
        int ans = H * W - (h * W + w * H - h * w);
        return ans;
    }
}