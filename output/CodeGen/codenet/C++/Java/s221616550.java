public class s221616550 {
  public static void main(String[] args) {
    String s = "";
    Scanner in = new Scanner(System.in);
    s = in.nextLine();
    if (isPalindrome(s) && isPalindrome(s.substring(0, s.length() / 2))) {
      System.out.println("Yes");
    } else {
      System.out.println("No");
    }
  }

  public static boolean isPalindrome(String s) {
    for (int i = 0; i < s.length() / 2; i++) {
      if (s.charAt(i)!= s.charAt(s.length() - 1 - i)) {
        return false;
      }
    }
    return true;
  }
}