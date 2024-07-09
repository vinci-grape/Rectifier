String s = input.nextLine();
int n = Integer.parseInt(input.nextLine());
int ans = 0;
for (int i = 0; i < n; i++) {
    String x = input.nextLine();
    int a = 0, b = 0;
    for (int j = 0; j < s.length(); j++) {
        if (s.charAt(j) == x.charAt(0)) {
            a += 1;
        } else if (s.charAt(j) == x.charAt(1)) {
            b += 1;
        } else {
            ans = ans + Math.min(a, b);
            a = 0;
            b = 0;
        }
    }
    ans = ans + Math.min(a, b);
}
System.out.println(ans);