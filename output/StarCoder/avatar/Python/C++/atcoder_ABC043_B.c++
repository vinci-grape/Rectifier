string s;
cin >> s;
string my_str = "";
for (int i = 0; i < s.length(); i++) {
    if (s[i] == '0' || s[i] == '1') {
        my_str += s[i];
    } else if (s[i] == 'B' && my_str.length()!= 0) {
        my_str = my_str.substr(0, my_str.length() - 1);
    }
}
cout << my_str;