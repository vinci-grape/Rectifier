int main() {
    int n;
    cin >> n;
    while (n % 2 == 0) {
        n /= 2;
    }
    if (n == 1) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}