import java.util.*;
import java.lang.*;
import java.io.*;
import java.math.*;

public class atcoder_ABC150_D
{
    public static void main (String[] args) throws java.lang.Exception{
        Scanner sc = new Scanner(System.in);
        int n,num;
        n = sc.nextInt();
        num = sc.nextInt();
        HashSet<Integer> num_set = new HashSet<Integer>();
        HashSet<Integer> two_times_set = new HashSet<Integer>();
        for(int i=0;i<n;i++){
            num_set.add(sc.nextInt());
        }
        for(int i:num_set){
            for(int j=1;j<30;j++){
                i/=2;
                if(i%2!=0){
                    two_times_set.add(j);
                    break;
                }
            }
            if(two_times_set.size()!=1){
                System.out.println(0);
                break;
            }
        }
        ArrayList<Integer> num_list = new ArrayList<Integer>(num_set);
        Collections.sort(num_list);
        BigInteger lcm = BigInteger.valueOf(num_list.get(0));
        for(int i=1;i<num_list.size();i++){
            lcm = lcm.multiply(BigInteger.valueOf(num_list.get(i))).divide(BigInteger.valueOf(gcd(lcm,BigInteger.valueOf(num_list.get(i)))));
        }
        System.out.println((num-lcm.divide(BigInteger.valueOf(2)))/lcm.intValue()+1);
    }
    public static int gcd(BigInteger a,BigInteger b){
        if(b.compareTo(BigInteger.ZERO)==0){
            return a.intValue();
        }
        return gcd(b,a.mod(b));
    }
}