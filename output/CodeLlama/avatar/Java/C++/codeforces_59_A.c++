#include <iostream>
#include <string>
using namespace std;
int main()
{
    string word;
    cin >> word;
    int uppercase = 0, lowercase = 0;
    for (int i = 0; i < word.length(); i++)
    {
        char ch = word[i];
        if (isupper(ch))
        {
            uppercase++;
        }
        else
        {
            lowercase++;
        }
    }
    if (uppercase > lowercase)
    {
        for (int i = 0; i < word.length(); i++)
        {
            word[i] = toupper(word[i]);
        }
        cout << word;
    }
    else if (lowercase > uppercase)
    {
        for (int i = 0; i < word.length(); i++)
        {
            word[i] = tolower(word[i]);
        }
        cout << word;
    }
    else
    {
        for (int i = 0; i < word.length(); i++)
        {
            word[i] = tolower(word[i]);
        }
        cout << word;
    }
    return 0;
}