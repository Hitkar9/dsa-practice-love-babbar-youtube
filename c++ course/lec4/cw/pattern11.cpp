#include <iostream>
using namespace std;

int main()
{

      int n;
    cin >> n;
    char ch = 'A' ;
    for(int i=0 ; i<=n ; i++)
    {
        
            for(int k = n - i ; k>0 ; k--)
            {
                cout <<" ";

            }
            for (int j = 1 ; j<= i ; j++)
            {
                cout << "*";
            }
        cout << endl;
            
        
            
    }
}
   
