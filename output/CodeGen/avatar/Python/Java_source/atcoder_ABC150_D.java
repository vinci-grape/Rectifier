import java.util.Scanner;
import java.util.Set;
import java.util.HashSet;
import java.util.List;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Arrays;
import java.util.stream.IntStream;
import java.util.stream.Collectors;

import java.math.BigInteger;

public class atcoder_ABC150_D {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] nums = new int[n];
        for(int num_i=0; num_i < n; num_i++){
            nums[num_i] = in.nextInt();
        }
        int num = in.nextInt();
        int[] num_set = new int[n];
        for(int i=0; i < n; i++){
            num_set[i] = nums[i];
        }
        Set<Integer> two_times_set = new HashSet<>();
        for(int i=0; i < n; i++){
            for(int j=1; j < 30; j++){
                num_set[i] //= 2;
                if(num_set[i] % 2!= 0){
                    two_times_set.add(j);
                    break;
                }
            }
        }
        List<Integer> num_list = new ArrayList<>(two_times_set);
        BigInteger lcm = BigInteger.ONE;
        for(int i=0; i < num_list.size(); i++){
            lcm = lcm.multiply(BigInteger.valueOf(num_list.get(i)));
            lcm = lcm.divide(BigInteger.valueOf(num_list.get(i)).gcd(BigInteger.valueOf(lcm)));
        }
        int result = (num - lcm.divide(BigInteger.valueOf(2)).intValue()) / lcm.divide(BigInteger.valueOf(num_list.get(0))).intValue() + 1;
        System.out.println(result);
    }
}