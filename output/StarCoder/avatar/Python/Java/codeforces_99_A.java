import java.util.Scanner;

public class codeforces_99_A {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String l = sc.next();
        String[] l1 = l.split("\\.");
        String s = l1[0];
        String p = l1[1];
        int i = Integer.parseInt(p.charAt(0));
        if(s.charAt(s.length()-1) == '9'){
            System.out.println("GOTO Vasilisa.");
        }
        else if(s.charAt(s.length()-1)!= '9' && i<5){
            System.out.println(s);
        }
        else{
            s = s + "1";
            System.out.println(s);
        }
    }
}