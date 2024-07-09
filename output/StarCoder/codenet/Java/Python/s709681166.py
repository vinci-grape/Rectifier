import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        
        for(int i = 0;i<s.length();i++){
            char c = s.charAt(i);
            if(Character.isUpperCase(c)){
            c += 32;
            System.out.print(c);
        }else if(Character.isLowerCase(c)){
            c -= 32;
                System.out.print(c);
            }
            else
                System.out.print(c);
               }
        System.out.println();
        sc.close();
    }
}