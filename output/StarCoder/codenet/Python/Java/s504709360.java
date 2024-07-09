import java.util.*;
public class s504709360 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String s=sc.next();
        if(s.length()<26){
            for(int i=0;i<26;i++){
                char c=(char)(i+'a');
                if(!s.contains(c+"")){
                    System.out.println(s+c);
                    return;
                }
            }
        }
        else{
            for(int i=s.length()-1;i>=0;i--){
                if(s.charAt(i)<s.charAt(i-1)){
                    String s1=s.substring(0,i-1);
                    for(int j=0;j<26;j++){
                        char c=(char)(j+'a');
                        if(c>s.charAt(i-1) &&!s1.contains(c+"")){
                            System.out.println(s1+c);
                            return;
                        }
                    }
                }
            }
            System.out.println(-1);
        }
    }
}