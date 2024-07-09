int W, H, x, y, r;
Scanner scanner = new Scanner(System.in);
W = scanner.nextInt();
H = scanner.nextInt();
x = scanner.nextInt();
y = scanner.nextInt();
r = scanner.nextInt();

if (x >= r && (W - r) >= x) {
    if (y >= r && (H - r) >= y) {
        System.out.println("Yes");
    } else {
        System.out.println("No");
    }
} else {
    System.out.println("No");
}