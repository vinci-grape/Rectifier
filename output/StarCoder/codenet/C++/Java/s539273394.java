import java.util.*;
public class s539273394 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int[] prime_list = new int[1001];
        int[] prime_num = new int[1001];
        int[] prime_or_not = new int[1001];
        int prime_counter = 0;
        for (int i = 2; i <= 1000; ++i)
        {
            prime_or_not[i] = 0;
        }
        for (int i = 2; i <= 1000; ++i)
        {
            for (int j = 2; j <= 1000/i; ++j)
            {
                if(prime_or_not[i]==0){
                    prime_or_not[i*j] = 1;
                }
            }
        }
        for (int i = 2; i <= 1000; ++i)
        {
            if(prime_or_not[i]==0){
                prime_list[prime_counter] = i;
                prime_counter+=1;
            }
        }
        for (int i = 0; i <= 1000; ++i)
        {
            prime_num[i] = 0;
        }
        for (int current_num = 2; current_num <= N; ++current_num)
        {
            int[] kekka = new int[2];
            kekka[1] = current_num;
            for (int i = 0; i < prime_counter; ++i)
            {
                int time = 0;
                while(1){
                    if(kekka[1]%prime_list[i] == 0){
                        kekka[1] = kekka[1]/prime_list[i];
                        time++;
                    }else{
                        break;
                    }
                }
                prime_num[i]+=time;
            }
        }
        long result = 1;
        for (int i = 0; i < prime_counter; ++i){
            result = (result*(prime_num[i]+1))%1000000007;
        }
        System.out.println(result);
    }
}