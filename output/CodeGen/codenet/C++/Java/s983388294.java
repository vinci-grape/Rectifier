public class s983388294 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] a = new int[n];
        for(int a_i=0; a_i < n; a_i++){
            a[a_i] = in.nextInt();
        }
        int curr = 0;
        for(int i=0; i<n; i++){
            if(a[i]==curr+1){
                curr++;
            }
        }
        if(curr>0){
            System.out.println(n-curr);
        }
        else{
            System.out.println(-1);
        }
    }
}