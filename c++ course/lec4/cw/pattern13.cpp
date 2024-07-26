#include <iostream>
using namespace std;

int main()
{
      int n;
    cin >> n;
    char ch = 'A' ;
    for(int i=1 ; i<=n ; i++){
        for(int space=i-1 ; space>0 ; space++)
        {
           cout<< " ";
        }
        for (int star=n-i+1 ; star>0 ; star-- ){
            cout << "*";
        }
        cout << endl; ; 
    }
   
}