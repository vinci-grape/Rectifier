import java.util.Scanner;

public class s173139590 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();

        int ac_count = 0;
        int wa_count = 0;
        int tle_count = 0;
        int re_count = 0;
        for (int i = 0; i < n; ++i){
            String s = scanner.next();
            if (s.equals("AC")){
                ac_count+=1;
            }else if(s.equals("WA")){
                wa_count+=1;
            }else if(s.equals("TLE")){
                tle_count+=1;
            }else if(s.equals("RE")){
                re_count+=1;
            }
        }
        System.out.println("AC x " + ac_count);
        System.out.println("WA x " + wa_count);
        System.out.println("TLE x " + tle_count);
        System.out.println("RE x " + re_count);
    }
}