public class codeforces_421_A {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int a = in.nextInt();
        int b = in.nextInt();
        int[] lista = new int[n];
        int[] listb = new int[n];
        for(int i = 0; i < n; i++){
            lista[i] = in.nextInt();
        }
        for(int i = 0; i < n; i++){
            listb[i] = in.nextInt();
        }
        for(int i = 0; i < n; i++){
            if(i+1 in lista){
                System.out.print(1);
            }else{
                System.out.print(2);
            }
        }
    }
}