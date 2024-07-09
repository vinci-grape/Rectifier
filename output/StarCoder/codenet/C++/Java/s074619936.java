import java.util.*;
public class s074619936 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String str;
        String tmp;
        int sum;

        while(true)
        {
            str = in.next();
            if(str.equals("0")) break;
            sum = 0;
            for(int i=0;i<str.length();i++)
            {
                tmp = str.substring(i,i+1);
                int num = Integer.parseInt(tmp);
                sum += num;
            }
            System.out.println(sum);
        }
    }
}