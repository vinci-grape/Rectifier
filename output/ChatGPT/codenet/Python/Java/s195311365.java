String s = new Scanner(System.in).nextLine();

if (s.length() == 2) {
    System.out.println(s);
} else {
    StringBuilder reversed = new StringBuilder(s);
    reversed.reverse();
    System.out.println(reversed.toString());
}