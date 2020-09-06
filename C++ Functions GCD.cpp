/**
    [PROGRAM] : C++/ (Exercise)GCD using Euclid's algorithm
    [AUTHOR]  :  Saddam Arbaa
    [Email]   :  <saddamarbaas@gmail.com>

    Write C++ program to find GCD(Greatest common divisor)
    between M,N using Euclid's algorithm */

#include <iostream>
using namespace std;

// GCD function using Euclid's algorithm
int Euclid_GCD(int, int);

int main() // the  Driver Code
{
    int num1, num2, gcd; // variables declarations

    do  // get valid number first (positive number)
    {
        //asking user input
        cout << "Please Enter first number :";
        cin >> num1;
        cout << "Please Enter second number:";
        cin >> num2;

    } while(num1 <= 0 || num2 <= 0);

    gcd = Euclid_GCD(num1, num2);  // call Euclid_GCD() function

    cout << "Greatest common divisor between " << num1 << " and "<<num2<< " is " << gcd;

    return 0; // signal to operating system program ran fine

}/** End  of main */


/**
   function to find GCD(Greatest common divisor)
    between M,N using Euclid's algorithm */

int Euclid_GCD(int num1, int num2)
{
    int dividend, divisor, remainder;    // local variables declarations

    dividend = num1 > num2 ? num1 : num2; // find the bigger number
    divisor = num1 < num2 ? num1 : num2;   // find the smaller number

    while(divisor > 0) // as loop as num1 bigger than zero go inside the loop
    {
        remainder = dividend % divisor; // find the remainder
        dividend = divisor;  // save in dividend value of divisor
        divisor = remainder; // save in divisor value of remainder
    }
    return dividend; // return GCD(dividend) (Greatest common divisor)

}/** End of Euclid_GCD(_)*/
