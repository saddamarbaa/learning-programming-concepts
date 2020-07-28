/*     
       C++ Conditions
       
   [AUTHOR]: Saddam Arbaa
   [Email] : <saddamarbaas@gmail.com>

  if else statement example as well as nested if
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
    cout << "Enter the operation code (+,-,/,% ,*,) : ";
    cin >> op;
    cout << "Enter the first operands : ";
    cin>> a;
    cout << "Enter the second operands : ";
    cin>> b;

    // print the result
    if (op == '+' | op == '-' |op == '*' |op == '/' |op == '%')
    {
        // nested if
           if (op == '+')
            cout << a << " + " << b<< " = "<<a + b;

             else if (op == '-')
             cout << a << " - " << b<< " = "<<a - b;

              else if (op == '*')
              cout << a << " * " << b<< " = "<<a * b;

             else if (op == '/')
              cout << a << " / " << b<< " = "<<a / b;

             else if (op == '%')
             cout << a << " % " << b<< " = "<<a % b;
    }
    else
    {
         cout<<"error operation code must be one of this (+,-,/,% ,*,)\n";
    }
    return 0;
}

