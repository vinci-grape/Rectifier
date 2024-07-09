public class codeforces_397_B {
    public String[] readInput() {
        int t = Integer.parseInt(br.readLine());
        String[] queries = new String[t];
        for (int i = 0; i < t; i++) {
            String[] line = br.readLine().split(" ");
            int k = Integer.parseInt(line[0]) / Integer.parseInt(line[1]);
            int x = Integer.parseInt(line[2]);
            queries[i] = (k * x >= Integer.parseInt(line[0])? "Yes" : "No");
        }
        return queries;
    }

    public void processTask() {
        String[] res = new String[queries.length];
        for (int i = 0; i < queries.length; i++) {
            int k = queries[i].split(" ")[0] / queries[i].split(" ")[1];
            int x = queries[i].split(" ")[2];
            res[i] = (k * x >= queries[i].split(" ")[0]? "Yes" : "No");
        }
        System.out.println(java.util.Arrays.toString(res));
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        CodeforcesTask397BSolution solution = new CodeforcesTask397BSolution();
        solution.readInput();
        solution.processTask();
    }
}