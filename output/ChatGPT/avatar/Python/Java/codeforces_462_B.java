n, k = Integer.parseInt(sc.next()), Integer.parseInt(sc.next());
String s = sc.next();
int[] count = new int[26];
for (char c : s.toCharArray()) {
    count[c - 'A']++;
}
Arrays.sort(count);
int res = 0;
for (int i = 25; i >= 0; i--) {
    if (count[i] >= k) {
        res += k * k;
        System.out.println(res);
        return;
    }
    k -= count[i];
    res += count[i] * count[i];
}
System.out.println(res);