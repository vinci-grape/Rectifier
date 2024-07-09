import java.util.Scanner;

public class s240156356 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str1 = sc.next();
        String str2 = sc.next();
        sc.close();

        str1 = sortString(str1);
        str2 = sortString(str2);

        int loop = str1.length() > str2.length() ? str2.length() : str1.length();
        boolean flag = false;

        for(int i = 0; loop > i; i++){
            char ch1 = str1.charAt(i);
            char ch2 = str2.charAt(i);

            if(ch1 == ch2){
                if(loop == i + 1 && str1.length() < str2.length()){
                    flag = true;
                    break;
                }else{
                    continue;
                }
            }else{
                if(ch2 > ch1){
                    flag = true;
                    break;
                }else{
                    break;
                }
            }
        }

        if(flag){
            System.out.println("Yes");
        }else{
            System.out.println("No");
        }
    }

    public static String sortString(String str){
        char[] ch = str.toCharArray();
        for(int i = 0; ch.length > i; i++){
            for(int j = 0; ch.length > j; j++){
                if(ch[i] < ch[j]){
                    char temp = ch[i];
                    ch[i] = ch[j];
                    ch[j] = temp;
                }
            }
        }
        return new String(ch);
    }
}