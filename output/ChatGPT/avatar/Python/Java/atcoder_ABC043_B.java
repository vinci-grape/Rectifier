String s = new Scanner(System.in).nextLine();
String my_str = "";
for (int i = 0; i < s.length(); i++) {
    char c = s.charAt(i);
    if (c == '0' || c == '1') {
        my_str += c;
    } else if (c == 'B' && my_str.length() != 0) {
        my_str = my_str.substring(0, my_str.length() - 1);
    }
}
System.out.println(my_str);