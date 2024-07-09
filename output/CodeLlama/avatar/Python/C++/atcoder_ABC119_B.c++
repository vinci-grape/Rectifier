int N;
cin >> N;
vector<double> x(N);
for (int i = 0; i < N; i++) {
    string s;
    cin >> s;
    if (s == "JPY") {
        x[i] = 1.0;
    } else if (s == "BTC") {
        x[i] = 380000.0;
    } else {
        x[i] = stod(s);
    }
}
cout << fixed << setprecision(1) << sum(x.begin(), x.end()) << endl;