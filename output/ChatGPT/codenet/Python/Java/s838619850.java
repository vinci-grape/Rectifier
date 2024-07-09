String S = scanner.nextLine();
String T = scanner.nextLine();

int N = S.length();
int M = T.length();
int ans = M;
for (int i = 0; i <= N - M; i++) {
    String S_2 = S.substring(i, i + M);
    int cnt = 0;
    for (int j = 0; j < M; j++) {
        if (T.charAt(j) != S_2.charAt(j)) {
            cnt++;
        }
    }
    ans = Math.min(ans, cnt);
}

System.out.println(ans);