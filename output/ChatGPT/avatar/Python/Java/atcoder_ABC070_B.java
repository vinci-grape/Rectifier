int[] A = new int[4];
Scanner scanner = new Scanner(System.in);
String[] input = scanner.nextLine().split(" ");
for (int i = 0; i < 4; i++) {
    A[i] = Integer.parseInt(input[i]);
}

if (A[1] <= A[2] || A[3] <= A[0]) {
    System.out.println(0);
} else {
    Arrays.sort(A);
    System.out.println(A[2] - A[1]);
}