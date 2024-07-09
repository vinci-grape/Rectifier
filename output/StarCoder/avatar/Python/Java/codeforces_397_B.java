class codeforces_397_B {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        for (int i = 0; i < t; i++) {
            int[] query = new int[3];
            query[0] = scanner.nextInt();
            query[1] = scanner.nextInt();
            query[2] = scanner.nextInt();
            int k = query[0] / query[1];
            System.out.println(k * query[2] >= query[0]? "Yes" : "No");
        }
    }
}