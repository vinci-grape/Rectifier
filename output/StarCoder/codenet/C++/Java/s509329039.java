import java.util.*;
import java.io.*;

public class s509329039 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int m = in.nextInt();
        int[] s = new int[m];
        int[] c = new int[m];
        for(int i=0;i<m;i++){
            s[i] = in.nextInt();
            c[i] = in.nextInt();
        }
        for(int i=0;i<1000;i++){
            String st = Integer.toString(i);
            if(st.length()!=n){
                continue;
            }
            boolean f = true;
            for(int j=0;j<m;j++){
                if(st.charAt(s[j])!=c[j]+'0'){
                    f = false;
                }
            }
            if(f){
                System.out.println(i);
                return;
            }
        }
        System.out.println(-1);
    }
}