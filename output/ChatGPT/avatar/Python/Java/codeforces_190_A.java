int n, m;
Scanner scanner = new Scanner(System.in);
n = scanner.nextInt();
m = scanner.nextInt();

if (n < 1) {
    if (m < 1) {
        System.out.println(n + " " + m);
        System.exit(0);
    }
    System.out.println("Impossible");
    System.exit(0);
}

int min, max;

if (m > n) {
    min = m;
    max = n + m - 1;
    System.out.println(min + " " + max);
}

if (m <= n) {
    min = n;
    max = n + m - 1;
    if (m == 0) {
        max = n;
    }
    System.out.println(min + " " + max);
}