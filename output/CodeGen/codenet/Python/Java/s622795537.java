public class s622795537 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        HashMap<String, Integer> map = new HashMap<String, Integer>();
        for (int i = 0; i < n; i++) {
            String s = in.next();
            if (!map.containsKey(s)) {
                map.put(s, 1);
            } else {
                map.put(s, map.get(s) + 1);
            }
        }
        int maxCount = 0;
        ArrayList<String> maxList = new ArrayList<String>();
        for (Map.Entry<String, Integer> entry : map.entrySet()) {
            if (entry.getValue() > maxCount) {
                maxCount = entry.getValue();
                maxList = new ArrayList<String>();
            }
            if (entry.getValue() == maxCount) {
                maxList.add(entry.getKey());
            }
        }
        Collections.sort(maxList);
        for (String s : maxList) {
            System.out.println(s);
        }
    }
}