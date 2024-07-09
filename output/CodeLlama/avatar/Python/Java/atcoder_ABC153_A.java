Scanner sc = new Scanner(System.in);
int h = sc.nextInt();
int a = sc.nextInt();
int sho = h / a;
int am = h % a;
if (am != 0) {
    sho++;
} else {
    //pass
}
System.out.println(sho);