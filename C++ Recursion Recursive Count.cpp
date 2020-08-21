/**
    [PROGRAM] : C++ Recursion
    [AUTHOR]  :   Saddam Arbaa
    [Email]   :  <saddamarbaas@gmail.com>
    Recursive Program to print numbers from N to 1 */

#include <iostream>
using namespace std;

void Count_Recursively(int n); // Function declaration

int main() // the main Function
{
    int n; //variable declaration

    cout << "Enter positive number N :"; // asking user input
    cin >> n;
    Count_Recursively(n);  // call the function

   return 0;// signal to operating system everything works fine

}/** End of main function */

/**  Recursive function to print Numbers from one to N */

void Count_Recursively(int n)
{
    if(n == 0) return ; /* Terminating condition(base case)*/
       printf("%d\t", n);   // print the number

     Count_Recursively(n - 1);  // Recursive call

}/** End of Count_Recursively()*/
