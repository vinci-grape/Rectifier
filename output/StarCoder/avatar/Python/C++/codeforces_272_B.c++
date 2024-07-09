#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> sequence(n);
    for (int i = 0; i < n; i++)
    {
        cin >> sequence[i];
    }
    cout << nPairsWithCommonFX(sequence);
    return 0;
}
int nPairsWithCommonFX(vector<int> sequence)
{
    int count = 0;
    vector<int> storage;
    for (int i = 0; i < sequence.size(); i++)
    {
        int y = f(sequence[i]);
        if (find(storage.begin(), storage.end(), y) == storage.end())
        {
            storage.push_back(y);
        }
        else
        {
            count += storage.size();
        }
    }
    return count;
}
int f(int n)
{
    int y = 1;
    while (n!= 1)
    {
        if (n % 2)
        {
            y += 1;
        }
        n /= 2;
    }
    return y;
}