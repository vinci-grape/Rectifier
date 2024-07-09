public class codeforces_408_B {
    public int shoppingOffers(String[] items, String[] queries) {
        int[] bought = new int[26];
        int[] made = new int[26];
        for (int i = 0; i < items.length; i++) {
            bought[items[i].charAt(0) - 'a']++;
        }
        for (int i = 0; i < queries.length; i++) {
            made[queries[i].charAt(0) - 'a']++;
        }
        int res = 0;
        for (int i = 0; i < 26; i++) {
            if (bought[i] < made[i]) {
                res += bought[i];
            } else {
                res += made[i];
            }
        }
        return res;
    }
}