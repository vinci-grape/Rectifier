String input = scanner.nextLine();
String[] splitInput = input.trim().split(" ");

String a = splitInput[0];
String b = splitInput[1];
String c = splitInput[2];

if (a.equals(b) && b.equals(c)) {
    System.out.println("Yes");
} else {
    System.out.println("No");
}