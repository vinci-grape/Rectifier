int a, b, c, k;
Scanner scanner = new Scanner(System.in);
a = scanner.nextInt();
b = scanner.nextInt();
c = scanner.nextInt();
k = scanner.nextInt();

if (k % 2 == 0) {
    System.out.println(a - b);
} else {
    System.out.println(b - a);
}