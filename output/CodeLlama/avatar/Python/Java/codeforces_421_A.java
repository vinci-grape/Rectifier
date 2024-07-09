Scanner sc = new Scanner(System.in);
int n = sc.nextInt();
int a = sc.nextInt();
int b = sc.nextInt();
int[] lista = new int[n];
int[] listb = new int[n];
for (int i = 0; i < n; i++) {
    lista[i] = sc.nextInt();
}
for (int i = 0; i < n; i++) {
    listb[i] = sc.nextInt();
}
for (int i = 0; i < n; i++) {
    if (lista[i] == i + 1) {
        System.out.print(1 + " ");
    } else {
        System.out.print(2 + " ");
    }
}