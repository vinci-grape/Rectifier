#include <bits/stdc++.h>
using namespace std;

class FastReader
{
    public:
    vector<string> split_string(string);
    FastReader()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
    }
    string next()
    {
        string s;
        cin >> s;
        return s;
    }
    int nextInt()
    {
        int n;
        cin >> n;
        return n;
    }
    long long nextLong()
    {
        long long n;
        cin >> n;
        return n;
    }
    double nextDouble()
    {
        double n;
        cin >> n;
        return n;
    }
    string nextLine()
    {
        string s;
        getline(cin, s);
        return s;
    }
};

vector<string> FastReader :: split_string(string input_string)
{
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x =='';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] =='')
    {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter ='';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos!= string::npos)
    {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));
    return splits;
}

int main()
{
    FastReader s;
    int n = s.nextInt();
    int m = s.nextInt();
    int t = reverse(m);
    cout << t + n << endl;
}

int reverse(int n)
{
    if (n < 10)
        return n * 10;
    int t = n, r = 0;
    while (t > 0)
    {
        r = (r * 10) + t % 10;
        t = t / 10;
    }
    return r;
}