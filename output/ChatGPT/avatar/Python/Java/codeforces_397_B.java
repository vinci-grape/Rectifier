public class codeforces_397_B {
    private String result;
    private int t;
    private List<int[]> queries;

    public codeforces_397_B() {
        this.result = "";
        this.t = 0;
        this.queries = new ArrayList<>();
    }

    public void readInput() {
        Scanner scanner = new Scanner(System.in);
        this.t = scanner.nextInt();
        for (int i = 0; i < this.t; i++) {
            int[] query = new int[3];
            for (int j = 0; j < 3; j++) {
                query[j] = scanner.nextInt();
            }
            this.queries.add(query);
        }
        scanner.close();
    }

    public void processTask() {
        List<String> res = new ArrayList<>();
        for (int[] query : this.queries) {
            int k = query[0] / query[1];
            res.add((k * query[2] >= query[0]) ? "Yes" : "No");
        }
        this.result = String.join("\n", res);
    }

    public String getResult() {
        return this.result;
    }

    public static void main(String[] args) {
        codeforces_397_B solution = new codeforces_397_B();
        solution.readInput();
        solution.processTask();
        System.out.println(solution.getResult());
    }
}