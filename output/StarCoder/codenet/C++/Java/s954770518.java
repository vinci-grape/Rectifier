import java.util.*;
public class s954770518 {

    public static void main(String[] args) {
        int s[]=new int[11];
        for(int i=0;i<10;i++){
            s[i]=Integer.parseInt(args[i]);
        }
        Arrays.sort(s);
        for(int i=9;i>6;i--){
            System.out.println(s[i]);
        }
    }
}