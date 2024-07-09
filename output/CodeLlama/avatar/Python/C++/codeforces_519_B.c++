int main()
{
    int n;
    cin >> n;
    int a[n], b[n], c[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    int x = 0, y = 0, z = 0;
    for (int i = 0; i < n; i++)
    {
        x += a[i];
    }
    for (int i = 0; i < n; i++)
    {
        y += b[i];
    }
    for (int i = 0; i < n; i++)
    {
        z += c[i];
    }
    cout << abs(x - y) << endl;
    cout << abs(y - z) << endl;
    return 0;
}