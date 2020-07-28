
/*
     C++ Conditions
    
   [AUTHOR]: Saddam Arbaa

   [Email] : <saddamarbaas@gmail.com>

   C++ program to find Max number between three numbers
*/

#include <iostream>

using namespace std;

int main()
{
    // declare 4 variable
    int num1, num2, num3 , Max;

    // asking user to enter the number
    cout << "Enter the first number : ";
    cin >> num1;
    cout << "Enter the second number : ";
    cin >> num2;
    cout << "Enter the thrid number : ";
    cin >> num3;

    // comparing process
    Max = num1;
    if(num2 > Max & num2 > num3)
    {
        Max = num2;
    }
    else if ( num3 > Max)
    {
        Max = num3;
    }

    // printing the maximum one
    if ( num1 == num2 == num3  )
    {
        cout << "the three number are equal in value \n";

    }
    else
    {
    cout << "the maximum number is = "<< Max;
    }
    return 0;
}
