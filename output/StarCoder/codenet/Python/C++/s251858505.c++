int main() {
    int n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == t[i]) ans++;
    }
    cout << ans << endl;
    return 0;
}