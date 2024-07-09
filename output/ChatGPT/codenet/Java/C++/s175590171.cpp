#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    long long sum = 0;
    int count = 0;
    for(int i=0;i<n-1;i++){
        sum+=a[i];
        if(a[i+1]<=2*sum){
            count++;
        }else{
            count = 0;
        }
    }
    cout << count+1 << endl;

    return 0;
}