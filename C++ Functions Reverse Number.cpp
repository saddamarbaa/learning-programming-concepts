/**
    [PROGRAM] : C++ // (Exercise) Reverse an integer Number
    [AUTHOR]  :  Saddam Arbaa
    [Email]   :  <saddamarbaas@gmail.com>

    Write C++ program to Reverse an integer Number using while loop */

#include <iostream>
using namespace std;

// function to Reverse an integer Number
void Reverse(int);

int main() // the  Driver Code
{
    int num; // variable for the number

    do  // get valid number first (positive number)
    {
        //asking user input
        cout << "Please Enter number to Reverse :\n" ;
        cout << "remember the number must be bigger than zero :";
        cin >> num;

    }while(num <= 0);

    Reverse(num);  // call is Reverse() function

    return 0; // signal to operating system program ran fine

}/** End  of main */


/** function to Reverse given number and print in Reverse order*/

void Reverse(int num)
{
    int remainder; // remainder variable

    while(num > 0) // as loop as num bigger than zero go inside the loop
    {
        remainder = num % 10;     // remainder will get one digit each time
        cout << remainder;     // print the remainder
        num = num / 10;       // new  num now is qual to num / 10
    }
    printf("\n");

}/** End of Reverse(_)*/
