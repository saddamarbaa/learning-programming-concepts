/*
   [AUTHOR]: Saddam Arbaa

   [Email] : <saddamarbaas@gmail.com>

  C++ Program to build a simple calculator using switch Statement
*/

#include <iostream>

using namespace std;

int main()
{
    // first declare two integer variable
    int a ,b;
    // declare char variable
    char op;

    // asking input from user
    cout << "Enter the operation code (+, - ,/ ,%  ,* ) : ";
    cin >> op;
    cout << "Enter the first operands : ";
    cin>> a;
    cout << "Enter the second operands : ";
    cin>> b;

    // switch on op
   switch (op)
   {
        case '+' :
           cout << "the result of addition  : "<< a << " + " << b<< " = "<<a + b;
        break;

       case '-' :
          cout << "the result of subtraction : "<< a << " - " << b<< " = "<<a - b;
       break;

        case '*' :
           cout << "the result of multiplication  : "<< a << " * " << b<< " = "<<a * b;
        break;

        case '/' :
           cout << "the result of division : "<< a << " / " << b<< " = "<< float(a) / b;
        break;

        case '%' :
           cout << "the remainder  : "<< a << " % " << b<< " = "<<a % b;
        break;

        // default case
        default :
             // operator is doesn't match any case constant (+, - ,/ ,%  ,* )
            cout << "illegal operation ! The operator is not correct";
        break;  //this break not have to
   }
}
