/**
    [PROGRAM] : C++ / (Exercise) Fibonacci Sequence
    [AUTHOR]  :  Saddam Arbaa
    [Email]   :  <saddamarbaas@gmail.com> */

#include <iostream>
using namespace std;

// Function declaration
int fib(int n);

int main() // the  Driver Code
{
    int n, result; /* variables declaration */
    do // get valid number
    {
       // asking valid positive number from user
      cout << "Enter N --> N must be bigger than zero : ";
      cin >> n;
    }while(n <= 0);
    result = fib(n);    // call function
    cout << result<<endl; // print the result
    return 0;// signal to operating system everything works fine

}/** End of main function */

/** Recursive function to calculate Fibonacci Sequence
    assuming that n is positive integer
 */

int fib(int n)
{
    if(n <= 1) // base case
    {
        return n;
    }
    // Recursive Case
    return fib(n - 1) + fib(n - 2);
}
