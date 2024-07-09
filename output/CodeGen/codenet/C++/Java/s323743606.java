public class s323743606 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        Map<Integer, Integer> map = new HashMap<Integer, Integer>();
        for (int i = 0; i < n; i++) {
            int w = in.nextInt();
            int p = in.nextInt();
            if (map.containsKey(w)) {
                map.put(w, Math.min(map.get(w), p));
            } else {
                map.put(w, p);
            }
        }
        int result = 0;
        for (int i = 0; i < n; i++) {
            result += map.get(i);
        }
        System.out.println(result);
    }
}