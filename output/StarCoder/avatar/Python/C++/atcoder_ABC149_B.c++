int main()
{
    int cookies[3];
    for(int i=0;i<3;i++)
    {
        cin>>cookies[i];
    }
    int leftOver = cookies[0] - cookies[2];
    int takahashi = max(0, leftOver);
    cout<<takahashi<<" "<<max(0,cookies[1]-abs(leftOver))<<endl;
    return 0;
}