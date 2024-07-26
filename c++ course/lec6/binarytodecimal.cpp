#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n ;
    cin >> n ; 
    int ans = 0 ;
    
    for ( int i = 0 ; n> 0 ; i++){
        int bit = n%2;
        ans = (bit * pow(10,i))+ans ;
        n = n/2;
    }
    cout << ans ;
}