public class s571001771 {
    public int minCostClimbingStairs(int n) {
        // Start typing your Java solution below
        // DO NOT write main() function
        int[] key = new int[n+1];
        int[] cost = new int[n+1];
        key[0] = 0;
        cost[0] = 0;
        for(int i=1;i<=n;i++){
            int b;
            cin>>cost[i]>>b;
            for(int j=0;j<b;j++){
                int c;
                cin>>c;
                key[i]+=(1<<(c-1));
            }
        }
        int[] dp = new int[1<<n+5];
        dp[0] = 0;
        for(int i=1;i<=n;i++){
            for(int j=0;j<=i;j++){
                dp[i|key[j]] = min(dp[i|key[j]], dp[i]+cost[j]);
            }
        }
        if(dp[(1<<n)-1]==Integer.MAX_VALUE) return -1;
        else return dp[(1<<n)-1];
    }
}