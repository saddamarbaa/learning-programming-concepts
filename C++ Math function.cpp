
/*

 * [PROG]		:C++ Math function
 * [AUTHOR]		: Saddam Arbaa <saddamarbaas@gmail.com>
 *               C++ has many functions that allows you to perform
 *               mathematical tasks on numbers.
 */
 
#include <iostream>

#include <cmath>   // Include the c math library
using namespace std;

int main()
{
    //declare 2 variable called firstNumber and seconNumber
    int firstNumber , secondNumber ;

   // asking user to enter firstNumber
   cout << "Enter first number for math function operations :";
   cin >> firstNumber;

  // asking user to enter secondNumber
   cout << "Enter the second number for math function operations : ";
   cin >> secondNumber;

    // print sqrt root of given number
    cout <<"sqrt root of "<<firstNumber<< " = "<<sqrt(firstNumber)<<endl;
    cout <<"sqrt root of "<<secondNumber<< " = "<<sqrt(secondNumber)<<endl;

   // round the given number
   cout <<"round number 4.4 "<< " to  "<<round(4.4)<<endl;
   cout <<"round number 4.6 "<< " to  "<<round(4.6)<<endl;

   // print the Logarithms of given number second
   cout <<"Logarithms of "<<firstNumber<< " = "<<log(firstNumber)<<endl;
   cout <<"Logarithms of "<<secondNumber<< " = "<<log2(secondNumber)<<endl;

   // print the minim number of two given number
   cout <<"minim of two integer number ( "<<firstNumber<< ", "<<secondNumber<<") = "<< min(firstNumber,secondNumber)<<endl;

    // print the maximum number of two given number
    cout <<"maximum of of two integer number ( "<<firstNumber<< ", "<<secondNumber<<") = "<< max(firstNumber,secondNumber)<<endl;

    // print the absolute value of given number
    cout <<"the absolute value abs(-2371041)   = "<< abs(-2371041)<<endl;

    // Returns the value of x rounded up to its nearest integer
    cout <<"ceil(23.5)  = "<<ceil(23.5)<<endl;
    cout <<"ceil(50.6)  = "<<ceil(50.6)<<endl;
    cout <<"ceil(3.4)  = "<<ceil(3.4)<<endl;

    // Returns the value of x rounded down to its nearest integer
    cout <<"floor(23.5)  = "<<floor(23.5)<<endl;
    cout <<"floor(235.6)  = "<<floor(235.6)<<endl;
    cout <<"floor(2.4)  = "<<floor(2.4)<<endl;

    //fmin(x, y) Returns the lowest value of a floating x and y
   cout <<"minim of two floating (23.3,  3.5) = "<<fmin(23.3,3.5)<<endl;

  //Returns the highest value of a floating x and y
   cout <<"minim of two floating (23.3,  3.5) = "<<fmax(23.3,3.5)<<endl;

   //fmod(x, y)Returns the floating point remainder of x/y
   cout <<"remainder of y ( "<<firstNumber<< "/ "<<secondNumber<<") = "<< fmod(firstNumber,secondNumber)<<endl;
   cout <<"remainder of( 5/ 2) = "<< fmod(5,2)<<endl;

   //Returns the value of x to the power of y
   cout <<"value of  ( "<<firstNumber<< " to the power of "<<secondNumber<<") = "<< pow(firstNumber,secondNumber)<<endl;
   cout <<"value of ( 5  to the power of 2) = "<< pow(5,2)<<endl;
}
