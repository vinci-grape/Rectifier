#include <iostream>
using namespace std;
int main()
{
    int t, m;
    cin >> t >> m;
    int *alocuente = new int[m];
    for (int i = 0; i < m; i++)
        alocuente[i] = 0;
    int ind = 1;
    for (int i = 0; i < t; i++)
    {
        string op;
        cin >> op;
        if (op == "alloc")
        {
            int pos = 0;
            for (int j = 0; j < m; j++)
            {
                if (alocuente[j] == 0)
                {
                    pos++;
                    if (pos == stoi(op.substr(6)))
                    {
                        for (int k = j - stoi(op.substr(6)) + 1; k <= j; k++)
                            alocuente[k] = ind;
                        cout << ind << endl;
                        ind++;
                        break;
                    }
                }
                else
                    pos = 0;
            }
        }
        if (op == "erase")
        {
            int pos = 0;
            if (stoi(op.substr(6)) == 0 || stoi(op.substr(6)) > m)
                cout << "ILLEGAL_ERASE_ARGUMENT" << endl;
            else
            {
                for (int j = 0; j < m; j++)
                {
                    if (stoi(op.substr(6)) > 0 && alocuente[j] == stoi(op.substr(6)))
                    {
                        alocuente[j] = 0;
                        break;
                    }
                }
            }
        }
        if (op == "defragment")
        {
            int cnt = 0;
            for (int j = 0; j < m; j++)
                if (alocuente[j] == 0)
                    cnt++;
            for (int j = 0; j < cnt; j++)
                alocuente[j] = 0;
            for (int j = cnt; j < m; j++)
                alocuente[j] = 0;
        }
    }
    return 0;
}