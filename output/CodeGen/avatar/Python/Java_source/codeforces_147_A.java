public class codeforces_147_A {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String S = in.next();
        int N = S.length();
        StringBuilder sb = new StringBuilder();
        for(int i = 0; i < N; i++) {
            if(i > 0 && S.charAt(i) =='') {
                sb.append(' ');
            }
            else if(i > 0 && S.charAt(i) == ',') {
                sb.append(',');
            }
            else if(i > 0 && S.charAt(i) == '.') {
                sb.append('.');
            }
            else if(i > 0 && S.charAt(i) == '!') {
                sb.append('!');
            }
            else if(i > 0 && S.charAt(i) == '?') {
                sb.append('?');
            }
            else {
                sb.append(S.charAt(i));
            }
        }
        System.out.println(sb.toString());
    }
}