int a, at;
int b, bt;
int t1, t2;
Scanner scanner = new Scanner(System.in);
String[] input1 = scanner.nextLine().split(" ");
String[] input2 = scanner.nextLine().split(" ");
String[] input3 = scanner.nextLine().split(":");
a = Integer.parseInt(input1[0]);
at = Integer.parseInt(input1[1]);
b = Integer.parseInt(input2[0]);
bt = Integer.parseInt(input2[1]);
t1 = Integer.parseInt(input3[0]);
t2 = Integer.parseInt(input3[1]);

int st = t2 + (t1 - 5) * 60;
int fin = st + at;
int now = 0;
int ans = 0;
while (now < fin && now < 1140) {
    if (now + bt > st) {
        ans++;
    }
    now += b;
}
System.out.println(ans);