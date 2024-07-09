int a, b, t;
Scanner sc = new Scanner(System.in);
a = sc.nextInt();
b = sc.nextInt();
t = sc.nextInt();
int cookie = 0;
int time = a;
while (time <= t + 0.5) {
    cookie += b;
    time += a;
}
System.out.println(cookie);