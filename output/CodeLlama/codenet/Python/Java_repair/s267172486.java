Scanner sc = new Scanner(System.in);
int h = sc.nextInt();
int a = sc.nextInt();
int ans = h / a;
int ama = h % a;
if (ama != 0) {
  ans++;
}
System.out.println(ans);