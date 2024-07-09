import java.util.*;
import java.lang.*;
import java.io.*;

public class codeforces_134_A {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] w = new int[n];
        for(int w_i=0; w_i < n; w_i++){
            w[w_i] = in.nextInt();
        }
        int x = in.nextInt();
        int[] d = new int[n];
        for(int i=0; i < n; i++){
            if(x - w[i] == 0){
                d[i] = 1;
            }
        }
        int count = 0;
        for(int i=0; i < n; i++){
            if(d[i] == 1){
                count++;
            }
        }
        System.out.println(count);
        for(int i=0; i < n; i++){
            if(d[i] == 1){
                System.out.print(i+1);
            }
        }
    }
}