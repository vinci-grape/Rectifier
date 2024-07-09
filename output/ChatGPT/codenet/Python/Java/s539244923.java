int n = scanner.nextInt();
int k = scanner.nextInt();
if (k % n == 0) {
    System.out.println(n + k);
} else {
    System.out.println(k - n);
}