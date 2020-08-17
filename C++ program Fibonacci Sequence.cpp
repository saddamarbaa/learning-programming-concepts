/**
    [PROGRAM] : C++ / (Exercise) Fibonacci Sequence
    [AUTHOR]  :  Saddam Arbaa
    [Email]   :  <saddamarbaas@gmail.com>

   write C++  program to print Fibonacci Sequence from zero to N
   using loop  */

#include <iostream>
using namespace std;

// the  Driver Code
int main()
{
    /* variables declaration */
    int i, a, b, c, n;

    // get valid number
    do
    {
        // asking valid positive number from user 
        cout << "Enter N --> N must be bigger than zero : ";
        cin >> n;
    }while(n <= 0);

    a = 0; // initialize a by zero
    b = 1; // initialize b by one

    //  print first 2 Fibonacci number then loop for others
    //loop starts from 2 because 0 and 1 are already printed
    cout << a << "  " << b << "  ";

    /**  Calculating  Fibonacci Sequence  start from here*/
    for( i = 2; i <= n - 1; i++)
    {
        c = a + b; // Calculate sum of a+ b and store in c
        cout << c  << "  ";
        a = b; // store in a value of b
        b = c; // store in b value of c which sum of (a+b)

    } /* End of loop */

    return 0;// signal to operating system everything works fine

}/** End of main function */
