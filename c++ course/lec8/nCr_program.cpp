#include <iostream>
using namespace std;

int factorial(int x){
    int fact = 1;
    for (int i=1; i<=x ; i++){
        fact = fact * i ;
    }
     return fact;
}

int nCr(int n , int r){
    int num = factorial(n);
    int denom = factorial(r)*factorial(n-r);
    int ans = num/denom;
    return ans ;
    
 
}
int main()
{
    int n ;
    cin>>n;
    int r ;
    cin>> r;
    cout << " your answer is"<< nCr(n,r);
    return 0;
}