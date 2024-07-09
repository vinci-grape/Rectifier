import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String array[] = new String[n];
        int cnt = 0;
        int cnt2=0;

        for(int i =0; i<n;i++){
            array[i] = sc.next();
        }

        Arrays.sort(array);

        String a = array[0];
        cnt++;
        for(int i=0;i<n;i++){
        
            if(a.equals(array[i])){

            }else{
                cnt++;
            }
             a = array[i];
       }
       System.out.println(cnt);
    }
}