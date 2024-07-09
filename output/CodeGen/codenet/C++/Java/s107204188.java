public class s107204188 {
    public int findMinDifference(int[] timePoints) {
        int minA = 1000000000;
        int num = 0;
        
        int n = timePoints.length;
        
        int t,f = 0;
        
        for(int i = 0; i < n; i++){
            t = timePoints[i];
            
            if(minA > t){
                minA = t;
            }else{
                
                if(f == t - minA)num++;
                else if(f < t - minA){
                    num = 1;
                    f = t - minA;
                }
                
            }
        }
        
        return num;
    }
}