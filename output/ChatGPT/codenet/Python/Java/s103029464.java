int N = Integer.parseInt(scanner.nextLine());
int[] A = new int[N];
int[] B = new int[N];

String[] input = scanner.nextLine().split(" ");
for (int i = 0; i < N; i++) {
    A[i] = Integer.parseInt(input[i]);
}

for (int i = N - 1; i >= 0; i--) {
    int tmp_sum = 0;
    for (int j = (i + 1) * 2 - 1; j < N; j += (i + 1)) {
        tmp_sum += B[j];
        tmp_sum %= 2;
    }
    B[i] = tmp_sum ^ A[i];
}

int sumB = 0;
for (int b : B) {
    sumB += b;
}

System.out.println(sumB);
for (int i = 0; i < N; i++) {
    if (B[i] == 1) {
        System.out.print((i + 1) + " ");
    }
}