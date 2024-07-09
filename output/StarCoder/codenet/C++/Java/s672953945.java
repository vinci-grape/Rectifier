import java.util.*;
import java.io.*;
import java.lang.*;

public class s672953945 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int L = sc.nextInt();
        String[] v = new String[N];
        for(int i=0;i<N;i++){
            v[i] = sc.next();
        }
        Arrays.sort(v);
        for(int i=0;i<N;i++){
            System.out.print(v[i]);
        }
    }
}