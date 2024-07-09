#include<bits/stdc++.h>
using namespace std;

//actual logic
void solve(){
    int a = ni();
    int b = ni();

    cout<<max(0, a-2*b)<<endl;
}





//constructor
Main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

//main metohd
int main(){
    Main();
    solve();
    return 0;
}

//Utility methods
//input an integer from scanner
int ni(){
    int a;
    cin>>a;
    return a;
}
//input a long from scanner
long nl(){
    long a;
    cin>>a;
    return a;
}
//input a float from scanner
float nf(){
    float a;
    cin>>a;
    return a;
}
//input a double from scanner
double nd(){
    double a;
    cin>>a;
    return a;
}
//input a sentence from scanner
string ns(){
    string a;
    cin>>a;
    return a;
}
//converts a string to stringtokenizer
stringtokenizer nst(string s){
    return new stringtokenizer(s);
}
//input an intger array
void ia(int a[]){
    for(int i = 0;i < a.length;i++)
        cin>>a[i];
}
//
void la(long a[]){
    for(int i = 0;i < a.length;i++)
        cin>>a[i];
}
//input a float array
void fa(float a[]){
    for(int i = 0;i < a.length;i++)
        cin>>a[i];
}
//input a double array
void da(double a[]){
    for(int i = 0;i < a.length;i++)
        cin>>a[i];
}
//input a string array either with all empty input or from scanner
void sa(string a[], bool empty){
    if(empty)
    {
        for(int i = 0;i < a.length;i++)
        {
            a[i] = "";
        }
    }
    else
    {
        for(int i = 0;i < a.length;i++)
        {
            cin>>a[i];
        }
    }
}
//input two dimensional integer array
void ida(int a[][], int n, int m)
{
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < m;j++)
        {
            cin>>a[i][j];
        }
    }
}
//input two dimentional long array
void lda(long a[][], int n, int m)
{
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < m;j++)
        {
            cin>>a[i][j];
        }
    }
}
//input two dimensional double array
void dda(double a[][], int n, int m)
{
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < m;j++)
        {
            cin>>a[i][j];
        }
    }
}
//convert string to integer
int stoi(string s){
    return stoi(s);
}
//convert string to double
double stod(string s){
    return stod(s);
}
//find minimum in a long array
long lmin(long a[])
{
    long min = LONG_MAX;
    for(int i = 0;i < a.length;i++)
    {
        if(min > a[i])
            min = a[i];
    }
    return min;
}
//find minimum in a integer array
int imin(int a[])
{
    int min = INT_MAX;
    for(int i = 0;i < a.length;i++)
    {
        if(min > a[i])
            min = a[i];
    }
    return min;
}
//find maximum in a long array
long lmax(long a[])
{
    long max = LONG_MIN;
    for(int i = 0;i < a.length;i++)
    {
        if(max < a[i])
            max = a[i];
    }
    return max;
}
//find maximum in an integer array
int imax(int a[])
{
    int max = INT_MIN;
    for(int i = 0;i < a.length;i++)
    {
        if(max < a[i])
            max = a[i];
    }
    return max;
}
//check whether an element is present in an integer array by binary search
bool ibs(int a[], int toFind)
{
    sort(a, a+a.length);
    int min = 0;
    int max = a.length-1;
    bool found = false;

    while(min <= max && !found)
    {
        int mid = min + (max-min)/2;
        if(a[mid] == toFind)
        {
           found = true;
        }
        else if(toFind > a[mid])
        {
            min = mid+1;
        }
        else
        {
            max = mid-1;
        }

    }
    return found;
}
//check whether an element is present in a long array
bool lbs(long a[], long toFind)
{
    sort(a, a+a.length);
    int min = 0;
    int max = a.length-1;
    bool found = false;

    while(min <= max && !found)
    {
        int mid = min + (max-min)/2;
        if(a[mid] == toFind)
        {
           found = true;
        }
        else if(toFind > a[mid])
        {
            min = mid+1;
        }
        else
        {
            max = mid-1;
        }

    }
    return found;
}

int stb(string s)
{
    int sum = 0;
    int k = 0;
    for(int i = s.length()-1;i >= 0;i--)
    {
        sum += stoi(s.charAt(i)+"") * pow(2, k++);
    }
    return sum;
}