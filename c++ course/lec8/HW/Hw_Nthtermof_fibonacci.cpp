#include <iostream>
using namespace std;

int Nthterm(int n){
    if (n<=1){ 
        return n;
    }

    int prev=0;
    int current = 1;
    
    for (int i = 2 ; i<=n ; i++){
        int next = prev + current ;

        prev = current;
        current = next;

    }
    return current ;

}

int main()
{
    int n ;
    cin>> n ;
    
    cout << "the nth term of fibonacci is "<< Nthterm(n)<< endl;
    return 0;
}