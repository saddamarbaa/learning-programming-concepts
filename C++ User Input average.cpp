
/**
     [PROG]	    :  C++ Program that take User Input
     [AUTHOR]   : Saddam Arbaa
     [Email]    : <saddamarbaas@gmail.com>


      C++ program to read 5 number from
      user and find the sum and average
*/

#include <iostream>

using namespace std;

int main()
{
    /* declare 5 variable to store the 5 numbers and sum variable
       to store the sum and average variable to store the average
       of all numbers */

    int num1,num2,num3,num4,num5,sum,average;

    // asking user to enter the numbers
    cout << "Enter five Real number to find the sum and Average\n";
    cout << "Enter the first Real number :";
    cin >> num1;

    cout << "Enter the second Real number :";
    cin >> num2;

    cout << "Enter the third Real number  :";
    cin >> num3;

    cout << "Enter the forth Real number  :";
    cin >> num4;

    cout << "Enter the fifth Real number  :";
    cin >> num5;

    // the sum
    sum = num1 + num2 + num3 + num4 + num5 ;

    // the average
    average = sum / 5;

    // printing the sum
    cout << "the summation is = " << sum << endl;

    // printing the Average
    cout << "the Average  is  = " << average << endl;
    return 0;
}
