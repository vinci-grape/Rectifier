import java.util.*;
public class s954770518 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int s[] = new int[10];
        for(int i=0;i<10;i++){
            s[i] = sc.nextInt();
        }
        Arrays.sort(s);
        for(int i=9;i>6;i--){
            System.out.println(s[i]);
        }
    }
}