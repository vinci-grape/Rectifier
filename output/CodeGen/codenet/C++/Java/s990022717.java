public class s990022717 {
    public static void main(String[] args) {
        int n,k,x,y;
        Scanner in = new Scanner(System.in);
        n = in.nextInt();
        k = in.nextInt();
        x = in.nextInt();
        y = in.nextInt();
        int sum=0;
        for(int i=1;i<=n;i++){
            if(i>k)sum+=y;
            else sum+=x;
        }
        System.out.println(sum);
    }
}