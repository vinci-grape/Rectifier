int[] cookies = Arrays.stream(new Scanner(System.in).nextLine().split(" "))
    .mapToInt(Integer::parseInt)
    .toArray();
int leftOver = cookies[0] - cookies[2];
int takahashi = Math.max(0, leftOver);
System.out.print(takahashi + " " + (takahashi > 0 ? cookies[1] : Math.max(0, cookies[1] - Math.abs(leftOver))));