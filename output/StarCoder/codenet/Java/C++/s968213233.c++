#include <bits/stdc++.h>
using namespace std;

class FastScanner{
public:
    FastScanner(istream& stream):stream(stream){}
    istream& stream;
    string next(){
        string s;
        stream>>s;
        return s;
    }
    int nextInt(){
        int x;
        stream>>x;
        return x;
    }
};

int main(){
    FastScanner in(cin);
    int T;
    cin>>T;
    for(int t=1;t<=T;t++){
        int N;
        cin>>N;
        vector<int> A(N);
        for(int i=0;i<N;i++)
            cin>>A[i];
        sort(A.begin(),A.end());
        long long res=0;
        priority_queue<pair<int,int>> q;
        q.push({A[N-1],A[N-1]});
        for(int i=N-2;i>=0;i--){
            int a=A[i];
            pair<int,int> place=q.top();
            res+=min(place.first,place.second);
            q.pop();
            q.push({place.first,a});
            q.push({a,place.second});
        }
        cout<<res<<endl;
    }
}