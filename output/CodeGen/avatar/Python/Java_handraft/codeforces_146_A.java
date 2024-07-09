import java.util.*;

public class codeforces_146_A {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        in.nextLine();
        String line = in.nextLine();
        String[] numbers = line.split("");
        int[] number = new int[numbers.length];
        for (int i = 0; i < numbers.length; i++) {
            number[i] = Integer.parseInt(numbers[i]);
        }
        int h1 = 0;
        int h2 = 0;
        int x = 0;
        for(int i=0; i < n; i++){
            if(number[i]!= 4 && number[i]!= 7){
                System.out.println("NO");
                x++;
                break;
            }
            if(i < n/2){
                h1 += number[i];
            }else{
                h2 += number[i];
            }
        }
        if(x == 0){
            if(h1 == h2){
                System.out.println("YES");
            }else{
                System.out.println("NO");
            }
        }
    }
}