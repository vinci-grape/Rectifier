public class s275513165 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String str = in.next();
        if (str.substring(2, 3).equals(str.substring(4, 5)) && str.substring(2, 3).equals(str.substring(4, 5))) System.out.println("Yes");
        else System.out.println("No");
    }
}