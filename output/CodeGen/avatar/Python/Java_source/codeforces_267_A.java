public class codeforces_267_A {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] arr = new int[n];
        for(int arr_i=0; arr_i < n; arr_i++){
            arr[arr_i] = in.nextInt();
        }
        int a = in.nextInt();
        int b = in.nextInt();
        int total = 0;
        while(a > 0 && b > 0){
            total += (a / b);
            a = a % b;
            if(a > 0){
                total += (b / a);
                b = b % a;
            }
        }
        System.out.println(total);
    }
}