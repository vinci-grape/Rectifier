int main()
{
    int n,c=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int l1[3];
        for(int j=0;j<3;j++)
            cin>>l1[j];
        if(sum(l1)>1)
            c++;
    }
    cout<<c;
    return 0;
}