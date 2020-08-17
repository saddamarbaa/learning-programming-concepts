/**
    [PROGRAM] : C++ The Return Keyword
    [AUTHOR]  :  Saddam Arbaa
    [Email]   :  <saddamarbaas@gmail.com> */

#include <iostream>
using namespace std;

// Function declaration
int SUM(int a, int b) ;

// Function declaration
int SUB(int a, int b) ;

// Function declaration
int MUL(int a, int b) ;

// the main Function
int main()
{
    //variables declaration
    int num1 = 5;
    int num2 = 5;

    int sum = SUM(num1, num2); // call the SUM function
    int sub = SUB(num1, num2); // call the SUB function
    int mult = MUL(num1, num2); // call the MUL function

    // print the values
    cout << "The sum is " <<  sum << endl;
    cout << "The Multiplication is " <<  mult << endl;
    cout << "The subtraction is " <<  sub << endl;

    return 0; // signal to operating system program ran fine

}/** End of main function */

// function to calculate sum and returned
int SUM(int a, int b)
{
    int s = a + b;

    // method using the return
    // statement to return a value
    return s;
}

// function to calculate subtraction and returned
int SUB(int a, int b)
{
    int s = a - b;

    // method using the return
    // statement to return a value
    return s;
}

// function to calculate Multiplication and returned
int MUL(int a, int b)
{
    int s = a * b;

    // method using the return
    // statement to return a value
    return s;
}
