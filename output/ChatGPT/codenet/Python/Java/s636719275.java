String s = input.nextLine();
String t = input.nextLine();

int check(String a, String b) {
    int s = 0;
    for (int i = 0; i < a.length(); i++) {
        if (a.charAt(i) != b.charAt(i)) {
            s++;
        }
    }
    return s;
}

int ans = 10^6;
for (int i = 0; i < s.length(); i++) {
    String a = s.substring(i);
    if (a.length() >= t.length()) {
        ans = Math.min(ans, check(t, a.substring(0, t.length())));
    }
}
System.out.println(ans);