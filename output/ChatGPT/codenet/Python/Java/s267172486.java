int h = Integer.parseInt(input().trim());
int a = Integer.parseInt(input().trim());

int ans = h / a;
int ama = h % a;

if (ama != 0) {
  ans += 1;
}
System.out.println(ans);