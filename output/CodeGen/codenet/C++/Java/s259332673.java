public class s259332673 {
    public int difference(int h1, int m1, int h2, int m2, int k) {
        int ans = h2*60+m2-(h1*60+m1);
        
        return ans-k;
    }
}