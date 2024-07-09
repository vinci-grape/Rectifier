import java.util.*;

public class codeforces_421_A {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int a = in.nextInt();
        int b = in.nextInt();
        int[] lista = new int[a];
        int[] listb = new int[b];
        for(int i = 0; i < a; i++){
            lista[i] = in.nextInt();
        }
        for(int i = 0; i < b; i++){
            listb[i] = in.nextInt();
        }
        for(int i = 0; i < n; i++){
            boolean contain = false;
            for(int j = 0; j < a; j++){
                if(i+1 == lista[j]) {
                    contain = true;
                    break;
                }
            }
            if(contain){
                System.out.print(1);
            }else{
                System.out.print(2);
            }
        }
    }
}