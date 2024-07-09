#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int count = 0, record = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'A' || s[i] == 'C' || s[i] == 'G' || s[i] == 'T')
        {
            count++;
        }
        else
        {
            if (count > record)
                record = count;
            count = 0;
        }
    }
    if (count > record)
        record = count;
    cout << record;
    return 0;
}