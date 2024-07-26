#include <iostream>
using namespace std;

int main()
{
   int a , b ;
   cout<< "ENTER THE  VALUE OF a : ";
   cin >> a ;
   cout << "ENTER THE VALUE OF b: ";
   cin>> b;
   
   char op ;
   cout << "CHOOSE THE OPERTION  : ";
   cin>> op;

   switch( op ){
    case '+': cout << (a+b) << endl;
              break;
    case '-': cout << (a-b) << endl;
              break;
    case '*': cout << (a*b)<< endl;
              break;
    case '/': cout << (b/a) << endl;
              break;
    case '%': cout << (a%b)<< endl ;
              break;  
    default : cout<< "INVALID OPERATION";

   }
   
}