import java.util.*;
import java.lang.*;
import java.io.*;
public class codeforces_400_A {
    public static void main (String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        for(int c=0;c<t;c++){
            String s = input.next();
            int count = 0;
            for(int i=1;i<=12;i++){
                if(12%i==0){
                    int a = 12/i;
                    int b = i;
                    int flag = 0;
                    for(int j=0;j<s.length();j++){
                        if(j%a==0 && s.charAt(j)=='O'){
                            flag++;
                        }
                        if(flag==b){
                            count++;
                            break;
                        }
                    }
                }
            }
            System.out.println(count+" ");
            for(int i=1;i<=12;i++){
                if(12%i==0){
                    int a = 12/i;
                    int b = i;
                    int flag = 0;
                    for(int j=0;j<s.length();j++){
                        if(j%a==0 && s.charAt(j)=='O'){
                            flag++;
                        }
                        if(flag==b){
                            System.out.print(a+"x"+b+" ");
                            break;
                        }
                    }
                }
            }
            System.out.println();
        }
    }
}