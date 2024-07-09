int[] a = new int[10];
Scanner scanner = new Scanner(System.in);
String[] input = scanner.nextLine().split(" ");
for (int i = 0; i < input.length; i++) {
    a[i] = Integer.parseInt(input[i]);
}

for (int e = 0; e < a.length; e++) {
    if (a[e] == 0) {
        System.out.println(e + 1);
        break;
    }
}