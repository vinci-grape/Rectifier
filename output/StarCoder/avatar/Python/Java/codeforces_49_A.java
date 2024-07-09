import java.util.*;
public class codeforces_49_A {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        char[] ch = s.toCharArray();
        for(int i=ch.length-1;i>=0;i--)
        {
            if(ch[i]==''|| ch[i]=='?')
            {
                continue;
            }
            else
            {
                if(ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u' || ch[i]=='A' || ch[i]=='E' || ch[i]=='I' || ch[i]=='O' || ch[i]=='U' || ch[i]=='Y')
                {
                    System.out.println("YES");
                    break;
                }
                else
                {
                    System.out.println("NO");
                    break;
                }
            }
        }
    }
}