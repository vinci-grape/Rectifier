int vamshi;
int z;
Scanner scanner = new Scanner(System.in);
String[] inputs = scanner.nextLine().split(" ");
vamshi = Integer.parseInt(inputs[0]);
z = Integer.parseInt(inputs[1]);
System.out.println(((vamshi / z + 1) * z));