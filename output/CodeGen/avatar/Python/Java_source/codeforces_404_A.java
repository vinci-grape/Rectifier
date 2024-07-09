public class codeforces_404_A {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[][] s = new int[n][n];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                s[i][j] = in.nextInt();
            }
        }
        int flag = 0;
        int[] d1 = new int[n];
        int[] d2 = new int[n];
        Set<Integer> rem = new HashSet<Integer>();
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(i == j){
                    d1[i] = s[i][j];
                }
                if(i == n - j - 1){
                    d2[i] = s[i][j];
                }
                if(i!= j && i!= n - j - 1){
                    rem.add(s[i][j]);
                }
            }
        }
        if(rem.size()!= 1){
            System.out.println("NO");
        }
        else if(d1!= d2){
            System.out.println("NO");
        }
        else if(rem.size()!= 1){
            System.out.println("NO");
        }
        else if(rem.equals(new HashSet<Integer>(Arrays.asList(d1)))){
            System.out.println("NO");
        }
        else{
            System.out.println("YES");
        }
    }
}