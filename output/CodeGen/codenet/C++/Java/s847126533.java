#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int findMedianSortedArrays(int A[], int m, int B[], int n) {
        int i = 0, j = 0, k = 0;
        int l = 0, r = 0;
        int sum = 0;
        int len = m + n;
        while (i < m && j < n) {
            if (A[i] < B[j]) {
                sum += A[i++];
            } else {
                sum += B[j++];
            }
        }
        while (i < m) {
            sum += A[i++];
        }
        while (j < n) {
            sum += B[j++];
        }
        if (len % 2 == 1) {
            return sum / len + 1;
        } else {
            return sum / len;
        }
    }
};

int main()
{
  int m,n;
  for(;cin>>m>>n;)
    {
      int A[m],B[n];
      for(int i=0;i<m;i++)
	{
	  cin>>A[i];
	}
      for(int i=0;i<n;i++)
	{
	  cin>>B[i];
	}
      Solution sol;
      cout<<sol.findMedianSortedArrays(A,m,B,n)<<endl;
    }
}