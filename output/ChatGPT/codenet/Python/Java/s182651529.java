int N = scanner.nextInt();
int K = scanner.nextInt();
int[] score = new int[N];
for (int i = 0; i < N; i++) {
    score[i] = scanner.nextInt();
}
int mae = 0;
int usiro = K;
for (int i = 0; i < N - K; i++) {
    if (score[mae] < score[usiro]) {
        System.out.println("Yes");
    } else {
        System.out.println("No");
    }
    mae++;
    usiro++;
}