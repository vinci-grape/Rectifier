int[] candy = new int[3];
Scanner scanner = new Scanner(System.in);
String input = scanner.nextLine();
String[] inputArr = input.split(" ");
for (int i = 0; i < 3; i++) {
    candy[i] = Integer.parseInt(inputArr[i]);
}
Arrays.sort(candy);
System.out.println((candy[0] + candy[1] == candy[2]) ? "Yes" : "No");