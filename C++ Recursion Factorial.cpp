/**
    [PROGRAM] : C++ Recursion
    [AUTHOR]  :  Saddam Arbaa
    [Email]   :  <saddamarbaas@gmail.com>
    Factorial Program using Recursion */

#include <iostream>
using namespace std;

// Function declaration
int factorial(int);

// the main Function
int main()
{
    int n, fact; //variable declaration

     cout << "Enter positive number N :"; // asking user input
     cin >> n;

     fact = factorial(n); // call the function

     // print the result
     cout <<"Factorial of a number  " << n << " is : " << fact;

     return 0;// signal to operating system everything works fine

}/** End of main function */

/** Recursive function to calculate Factorial of Number */
int factorial(int n)
{
    if(n == 1) return 1; /* Terminating condition(base case)*/

     return  (n * factorial(n - 1));  ; //Recursive call

}/** End of fact */
