int n = Integer.parseInt(input);
n = Integer.parseInt(String.valueOf(n).substring(String.valueOf(n).length() - 1));

if (n == 2 || n == 4 || n == 5 || n == 7 || n == 9) {
  System.out.println("hon");
} else if (n == 0 || n == 1 || n == 6 || n == 8) {
  System.out.println("pon");
} else {
  System.out.println("bon");
}