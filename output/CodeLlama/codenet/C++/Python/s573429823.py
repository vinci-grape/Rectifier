#include <iostream>
using namespace std;
int main(void)
{
    // Your code here!
    unsigned long n;
    cin >> n;
    bool flg=false;
    if( n<4 ){
        cout << "No" << endl;
    }else{
        for( int i=0; i<=(n/4); i++)
        {
            for( int j=0; j<=(n/7); j++ )
            {
                if( (i*4+j*7)==n )
                {
                    flg=true;
                    break;
                }
            }
            if(flg) break;
        }
        if(flg)
        {
            cout << "Yes" << endl;
        }else{    
            cout << "No" << endl;
        }
    }
}