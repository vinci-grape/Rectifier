public class s591424993 {
    public int minCostII(int[][] costs) {
        int d = costs.length;
        int[][] pc = new int[d][2];
        for (int i = 0; i < d; i++) {
            pc[i][0] = costs[i][0];
            pc[i][1] = costs[i][1];
        }
        
        int ans = Integer.MAX_VALUE;
        
        for (int bit = 0; bit < 1 << d; bit++) {
            int count = 0;
            int sum = 0;
            Set<Integer> nokori = new HashSet<Integer>();
            for (int i = 0; i < d; i++) {
                if ((bit & (1 << i))!= 0) {
                    sum += pc[i][0] * (i + 1) * 100 + pc[i][1];
                    count += pc[i][0];
                    nokori.add(i + 1);
                }
            }
            
            if (sum < g) {
                int use = nokori.iterator().next();
                int n = min(pc[use-1][0], -(-(g - sum) / (use * 100)));
                count += n;
                sum += n * use * 100;
            }
            
            if (sum >= g) {
                ans = Math.min(ans, count);
            }
        }
        
        return ans;
    }
}