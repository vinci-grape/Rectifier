String input = new Scanner(System.in).nextLine();
String[] parts = input.split(" ");
int N = Integer.parseInt(parts[0]);
int K = Integer.parseInt(parts[1]);

String S = new Scanner(System.in).nextLine();
char[] charArray = S.toCharArray();

if (charArray[K-1] == 'A') {
  charArray[K-1] = 'a';
} else if (charArray[K-1] == 'B') {
  charArray[K-1] = 'b';
} else {
  charArray[K-1] = 'c';
}

String ans = new String(charArray);
System.out.println(ans);