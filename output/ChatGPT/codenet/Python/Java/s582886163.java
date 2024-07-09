int N = Integer.parseInt(scanner.nextLine());
int[] capacity_list = new int[5];
for (int i = 0; i < 5; i++) {
    capacity_list[i] = Integer.parseInt(scanner.nextLine());
}
Arrays.sort(capacity_list);
int bottle_neck = capacity_list[0];
System.out.println(4 + ((N + bottle_neck - 1) / bottle_neck));