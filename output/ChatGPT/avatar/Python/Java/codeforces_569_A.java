int t, s, q;
Scanner sc = new Scanner(System.in);
t = sc.nextInt();
s = sc.nextInt();
q = sc.nextInt();
int ans = 0;
while (s < t) {
    s *= q;
    ans++;
}
System.out.println(ans);