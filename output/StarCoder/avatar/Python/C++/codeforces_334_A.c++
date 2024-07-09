int main()
{
    int n;
    cin >> n;
    int i = 1, j = n * n;
    while (i < j)
    {
        cout << i << " " << j << endl;
        i++;
        j--;
    }
    return 0;
}