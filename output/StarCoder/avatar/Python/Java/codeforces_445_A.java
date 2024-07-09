import java.util.*;
public class codeforces_445_A {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int m = in.nextInt();
        String[][] l = new String[n][m];
        for(int i=0;i<n;i++){
            String s = in.next();
            for(int j=0;j<m;j++){
                if(s.charAt(j) == '.'){
                    if((i+j)&1) s = s.substring(0,j) + "W" + s.substring(j+1);
                    else s = s.substring(0,j) + "B" + s.substring(j+1);
                }
            }
            l[i] = s.split("");
        }
        for(String[] c : l)
            for(String s : c)
                System.out.print(s);
    }
}