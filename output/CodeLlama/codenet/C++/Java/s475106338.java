import java.util.Scanner;
public class s475106338 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int i,t,n;
        for(i=0; i<4; i++){
            t = sc.nextInt();
            n = sc.nextInt();
            if(t==1){
                System.out.println(6000*n);
            }
            else if(t==2){
                System.out.println(4000*n);
            }
            else if(t==3){
                System.out.println(3000*n);
            }
            else if(t==4){
                System.out.println(2000*n);
            }
        }
    }
}