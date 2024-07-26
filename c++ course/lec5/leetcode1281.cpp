#include <iostream>
using namespace std;

int main()
{
    int n ;
    cin >> n ;
    int sum = 0;
    int prod = 1 ;

    for (int i = 1 ; n>0 ; i++){
        int rightmost = n%10;
        sum = sum + rightmost;
        prod =  prod * rightmost;
         n = n/10;


    }
    cout << prod - sum ;
}