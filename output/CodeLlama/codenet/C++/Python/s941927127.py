#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
  string W;
  cin >> W;
  
  sort(W.begin(),W.end());

  for (string::iterator itr = W.begin(); itr != W.end(); itr+=2)
  {
    if(*itr != *(itr+1))
    {
      cout << "No" << endl;
      return 0;
    }
    
  }
  cout << "Yes" << endl;
  


  return 0;
}