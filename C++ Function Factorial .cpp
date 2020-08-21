/**
    [PROGRAM] : C++ Functions
    [AUTHOR]  :  Saddam Arbaa
    [Email]   :  <saddamarbaas@gmail.com>
    program to calculate Factorial of given number N */

#include <iostream>
using namespace std;

// Function declaration
int Fact(int);

// the main Function
int main()
{
    int n, Factorial; //variable declaration

     cout << "Enter number N:"; // asking user input
     cin >> n;

     Factorial = Fact(n); // call the function

     // print the result
     cout <<"the Factorial of  " << n << " is : " << Factorial;
     return 0;// signal to operating system everything works fine

}/** End of main function */

/** function to calculate Factorial of Number */
int Fact(int n)
{
    int i, f; //variable declarations
    f = 1;   //initialize f by 1

    for(i = n; i>=1; i--) // loop from given n to 1
        f = f * i;        // calculate Factorial
    return f;             // return the  Factorial
}/** End of fact */
