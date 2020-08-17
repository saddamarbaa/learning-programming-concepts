/**
    [PROGRAM] : C++ Functions - Pass By Reference
    [AUTHOR]  :  Saddam Arbaa
    [Email]   :  <saddamarbaas@gmail.com>    */

#include <iostream>
using namespace std;

// function to swap values of two variables
void swapNums(int &a, int &b);

// the main Function
int main()
{
    // local variable declaration:
    int firstNum = 12;
    int secondNum = 30;

    cout << "Before swap: " << "\n";
    cout << "Before swap, value of first Number  : " << firstNum << endl;
    cout << "Before swap, value of second Number : " << secondNum << endl;

    /* calling a function to swap the values using variable reference.*/
    swapNums(firstNum, secondNum);

    cout << "After swap: " << "\n";
    cout << "After swap, value of first Number     : " << firstNum << endl;
    cout << "After swap, value of second Number    : " << secondNum << endl;

    return 0;// signal to operating system everything works fine

}/** End of main function */


 /**
  function to swap values of two variables
 (user should pass address of two as parameter)*/

void swapNums(int &a, int &b)
{
    // declare temp variable
    int temp;

    temp = a; /* save the value at address a in temp */

    a = b; /* put b into a */

    b = temp; /* put a into b */

    // swap is done
}/** End of swap () */
