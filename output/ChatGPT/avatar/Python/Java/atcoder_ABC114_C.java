int N = Integer.parseInt(Scanner.nextLine());

int aaa(String n) {
    if (Integer.parseInt(n) > N) {
        return 0;
    }
    int ans = 1;
    if (new HashSet<>(Arrays.asList(n.split(""))).equals(new HashSet<>(Arrays.asList("7", "5", "3")))) {
        ans = 1;
    } else {
        ans = 0;
    }
    for (char i : "753".toCharArray()) {
        ans += aaa(n + i);
    }
    return ans;
}

System.out.println(aaa("0"));