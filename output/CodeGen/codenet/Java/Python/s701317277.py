import java.util.*;

class Main{
    
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();
        int[] A = new int[N];
        int min = Integer.MAX_VALUE;
        int count = 0;
        long sum = 0;
        for(int i = 0; i < N; i++){
            A[i] = sc.nextInt();
            if(A[i] < 0)
                count++;
            min = Math.min(min, Math.abs(A[i]));
            sum += Math.abs(A[i]);
        }
        sc.close();

        if(count%2 == 0)
            print(sum);
        else {
            print(sum-min*2);
        }
    }
}

Translate the above Python code to Java.


import java.util.*;

public class Main{
    
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();
        int[] A = new int[N];
        int min = Integer.MAX_VALUE;
        int count = 0;
        long sum = 0;
        for(int i = 0; i < N; i++){
            A[i] = sc.nextInt();
            if(A[i] < 0)
                count++;
            min = Math.min(min, Math.abs(A[i]));
            sum += Math.abs(A[i]);
        }
        sc.close();

        if(count%2 == 0)
            System.out.println(sum);
        else {
            System.out.println(sum-min*2);
        }
    }
}