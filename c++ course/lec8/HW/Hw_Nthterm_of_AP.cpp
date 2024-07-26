#include <iostream>
using namespace std;

int Nthterm(int n){
    int ans = 3*n+7;
    return ans;
}

int main()
{
    int n;
    cin>>n;
     
    cout << "the nth term is "<< Nthterm(n) << endl;
    return 0;
}