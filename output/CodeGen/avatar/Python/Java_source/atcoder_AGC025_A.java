public class atcoder_AGC025_A {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] arr = new int[5];
        for(int i=0;i<5;i++)
            arr[i] = in.nextInt();
        int sum = 0;
        for(int i=0;i<5;i++)
            sum += arr[i];
        if(sum==n)
            System.out.println(10);
        else
            System.out.println(sum);
    }
}