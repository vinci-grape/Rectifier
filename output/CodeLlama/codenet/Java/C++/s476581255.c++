#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  int a[n];
  for(int i = 0; i<n; i++) {
    cin >> a[i];
  }
  int count = bubbleSort(a, n);
  for(int i = 0; i<n; i++) {
    if(i<n-1){
      cout << a[i] << " ";
    }else {
      cout << a[i] << endl;
    }
  }
  cout << count << endl;
}

int bubbleSort(int a[],int n) {
  bool flag = true;
  int count = 0;
  while(flag == true) {
    flag = false;
    for(int j = n-1;j>0; j--) {
      if(a[j]<a[j-1]) {
        int free = a[j];
        a[j] = a[j-1];
        a[j-1] = free;
        count++;
        flag = true;
      }
    }
  }
  return count;
}