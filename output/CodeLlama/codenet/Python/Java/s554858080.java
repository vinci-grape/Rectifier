import java.util.Scanner;

public class s554858080 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String num = sc.nextLine();
        if(Integer.parseInt(num) % 4 == 0){
            System.out.println("YES");
        }else{
            System.out.println("NO");
        }
    }
}