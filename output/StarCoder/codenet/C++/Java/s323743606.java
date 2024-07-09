import java.util.*;
public class s323743606 {
    public static void main(String[] args) {
        Scanner cin=new Scanner(System.in);
        Map<Integer,Integer>m=new HashMap<Integer,Integer>();
        for(int i=0;i*200<5001;i++){
            for(int j=0;j*300<5001;j++){
                for(int k=0;k*500<5001;k++){
                    int w=i*200+j*300+k*500;
                    int p=i/5*5*380*0.8+i%5*380
                         +j/4*4*550*0.85+j%4*550
                         +k/3*3*850*0.88+k%3*850;
                    if(m.containsKey(w))m.put(w,Math.min(m.get(w),p));
                    else m.put(w,p);
                }
            }
        }
        int n;
        while(cin.hasNextInt()){
            n=cin.nextInt();
            System.out.println(m.get(n));
        }
    }
}