import java.util.*;
public class s589139355 {

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int a,t=0,h=0,lt,lh,tt,hh,l;
        a=sc.nextInt();
        String taro,hana;
        for(int i=0; i<a; ++i){
            taro=sc.next();
            hana=sc.next();
            lt= taro.length();
            lh= hana.length();
            if(lt>lh){
                l=lt;
            }
            else{
                l=lh;
            }
            tt=0;
            hh=0;

            if(taro.compareTo(hana)>0){
                t=t+3;
            }
            else if(hana.compareTo(taro)>0){
                h=h+3;
            }
            else if(hana.compareTo(taro)==0){
                h=h+1;
                t=t+1;
            }
        }
        System.out.println(t+" "+h);
    }
}