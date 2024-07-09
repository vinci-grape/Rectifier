int A, B, K;
Scanner scanner = new Scanner(System.in);
A = scanner.nextInt();
B = scanner.nextInt();
K = scanner.nextInt();

if (A + K - 1 >= B - K + 1) {
    while (A <= B) {
        System.out.println(A);
        A++;
    }
} else {
    int i = 0;
    while (i <= K - 1) {
        System.out.println(A + i);
        i++;
    }
    while (B - K + 1 <= B) {
        System.out.println(B - K + 1);
        K--;
    }
}