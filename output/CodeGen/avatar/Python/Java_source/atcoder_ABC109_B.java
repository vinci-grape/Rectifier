public class atcoder_ABC109_B {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        String[] strs = new String[n];
        for(int i = 0; i < n; i++){
            strs[i] = in.next();
        }
        int[] arr = new int[26];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < strs[i].length(); j++){
                arr[strs[i].charAt(j) - 'a']++;
            }
        }
        boolean f = true;
        for(int i = 0; i < 26; i++){
            if(arr[i] >= 2){
                f = false;
                break;
            }
        }
        if(f){
            System.out.println("Yes");
        }else{
            System.out.println("No");
        }
    }
}