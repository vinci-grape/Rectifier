public class s537584449 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int a = in.nextInt();
        in.close();
        
        int result = 0;
        int temp = a;
        while (temp!= 0) {
            result += temp%10;
            temp = temp/10;
        }
        
        if (result == 1) {
            System.out.println("10");
        } else {
            System.out.println(result);
        }
    }
}