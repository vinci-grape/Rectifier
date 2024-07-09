int n = Integer.parseInt(scanner.nextLine());
for (int i = 0; i < n; i++) {
    int a = Integer.parseInt(scanner.nextLine());
    if (a < 2) {
        System.out.println(0);
    }
    if (a >= 2) {
        System.out.println(a - 2);
    }
}