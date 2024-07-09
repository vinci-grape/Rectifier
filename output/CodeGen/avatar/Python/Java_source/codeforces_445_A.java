public class codeforces_445_A {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int m = in.nextInt();
        String[] s = new String[n];
        for(int i=0; i<n; i++){
            s[i] = in.next();
        }
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(s[j].charAt(i) == '.'){
                    if((j+i)%2 == 0){
                        s[j] = s[j].replace("W", ".");
                    }else{
                        s[j] = s[j].replace("B", ".");
                    }
                }
            }
        }
        for(String c : s){
            System.out.println(c);
        }
    }
}