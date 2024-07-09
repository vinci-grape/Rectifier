public class atcoder_ABC174_C {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        for(int a0 = 0; a0 < t; a0++){
            int k = in.nextInt();
            int t = 0;
            for(int a1 = 1; a1 <= k; a1++){
                t = (t % k) * 10 + 7;
                if(t % k == 0){
                    System.out.println(a1);
                    break;
                }
            }
            if(a1 > k){
                System.out.println(-1);
            }
        }
    }
}