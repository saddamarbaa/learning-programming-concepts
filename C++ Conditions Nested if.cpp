
/**
   [PROG]	    :  C++ Conditions
   [AUTHOR]		:  Saddam Arbaa
   [Email]      : <saddamarbaas@gmail.com>

   Nested if
   write a program that accept an integer number from user,
    in case the number is positive check and print out whether
   it is Even or Odd number
*/

#include <iostream>

using namespace std;

int main()
{
    // declare variable number
    int number;

    // asking user input number
    cout << "enter any integer number!  :";
    cin >> number;

    // check condition
    if (number > 0)
    {
        // nested if condition
         if(number % 2 == 0)
            cout  << "number "<< number<<" is : even number \n";
           else
            cout  << "number "<< number<<" is : Odd number \n";
    }
    else
    {
        cout << "invalid input please enter integer number bigger than zero";
    }
    return 0;
}
