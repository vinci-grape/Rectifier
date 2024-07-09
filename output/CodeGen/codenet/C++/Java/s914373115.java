public class s914373115 {
    public static void main(String[] args) {
        A();
    }

    public static void A() {
        B();
    }

    public static void B() {
        long long int x,sum;
        Scanner in = new Scanner(System.in);
        x = in.nextLong();
        int i;
        sum=100;
        for(i=0;sum<x;++i){
            sum+=sum/100;
        }
        System.out.println(i);
    }
}