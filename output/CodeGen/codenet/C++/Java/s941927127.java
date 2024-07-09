public class s941927127 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String W = in.next();
        in.close();
        
        sort(W.toCharArray());
        
        for (int i = 0; i < W.length(); i+=2) {
            if(W.charAt(i)!= W.charAt(i+1)) {
                System.out.println("No");
                return;
            }
        }
        System.out.println("Yes");
    }
}