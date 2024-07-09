String[] input = new Scanner(System.in).nextLine().split(" ");
String num = String.join("", input);

if(Integer.parseInt(num) % 4 == 0) {
    System.out.println("YES");
} else {
    System.out.println("NO");
}